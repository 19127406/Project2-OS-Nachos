// exception.cc 
//	Entry point into the Nachos kernel from user programs.
//	There are two kinds of things that can cause control to
//	transfer back to here from user code:
//
//	syscall -- The user code explicitly requests to call a procedure
//	in the Nachos kernel.  Right now, the only function we support is
//	"Halt".
//
//	exceptions -- The user code does something that the CPU can't handle.
//	For instance, accessing memory that doesn't exist, arithmetic errors,
//	etc.  
//
//	Interrupts (which can also cause control to transfer from user
//	code into the Nachos kernel) are handled elsewhere.
//
// For now, this only handles the Halt() system call.
// Everything else core dumps.
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "system.h"
#include "syscall.h"
#include "math.h"

#define MAX_INT 		2147483647
#define MAX_INT_LENGTH 		10
#define MAX_STRING_LENGTH	255

//----------------------------------------------------------------------
// ExceptionHandler
// 	Entry point into the Nachos kernel.  Called when a user program
//	is executing, and either does a syscall, or generates an addressing
//	or arithmetic exception.
//
// 	For system calls, the following is the calling convention:
//
// 	system call code -- r2
//		arg1 -- r4
//		arg2 -- r5
//		arg3 -- r6
//		arg4 -- r7
//
//	The result of the system call, if any, must be put back into r2. 
//
// And don't forget to increment the pc before returning. (Or else you'll
// loop making the same system call forever!
//
//	"which" is the kind of exception.  The list of possible exceptions 
//	are in machine.h.
//----------------------------------------------------------------------

char* User2System(int virtAddr, int limit)
{
	int i; 
	int oneChar;
	char* kernelBuf = NULL;
	kernelBuf = new char[limit + 1]; 
	if (kernelBuf == NULL)
		return kernelBuf;

	memset(kernelBuf, 0, limit + 1);

	for (i = 0; i < limit; i++)
	{
		machine->ReadMem(virtAddr + i, 1, &oneChar);
		kernelBuf[i] = (char)oneChar;
		if (oneChar == 0)
			break;
	}
	return kernelBuf;
}

int System2User(int virtAddr, int len, char* buffer)
{
	if (len < 0) return -1;
	if (len == 0)return len;
	int i = 0;
	int oneChar = 0;
	do {
		oneChar = (int)buffer[i];
		machine->WriteMem(virtAddr + i, 1, oneChar);
		i++;
	} while (i < len && oneChar != 0);
	return i;
}

void IncreasePC()
{
	machine->registers[PrevPCReg] = machine->registers[PCReg];
	machine->registers[PCReg] = machine->registers[NextPCReg];
	machine->registers[NextPCReg] += 4;
}

int ReadInt() {
	int number = 0;
	int nDigit = 0;
	char* buffer = new char[MAX_INT_LENGTH];
	nDigit = gSynchConsole->Read(buffer, MAX_INT_LENGTH);

	// Check positive / negative
	int i = (buffer[0] == '-' ? 1:0);

	// Check if unvalid number -> return 0
	for(int j = i; j < nDigit; j++) {
		/// Ex: 3.000
          	if (buffer[j] == '.') { 
                	for(int k = j + 1; k < nDigit; k++) {
                        	if(buffer[k] != '0') {
                                	printf("\nError: The integer number is not valid\n");
                                    	machine->WriteRegister(2, 0);
                                    	delete buffer;
                                    	return 0;
                                }
                        }			
                        break;                           
              	}
                else if ((int)buffer[i] < 48 || (int)buffer[i] > 57) {
                	printf("\nError: The integer number is not valid\n");
                        machine->WriteRegister(2, 0);
                        delete buffer;
                        return 0;
              	}    
    	}

	// Convert to integer
	for (; i < nDigit; i++) 
		number = number * 10 + (int)(buffer[i] - 48);
					
	number = buffer[0] == '-' ? -1 * number : number;
	machine->WriteRegister(2, number);
	delete buffer;
	return number;
}

void PrintInt(int number) {
	bool isNegative = false;
	int nDigit = 0;
	int i = 0;
       	char* buffer = new char[MAX_INT_LENGTH]
	int temp = = number;
	
	// Check positive / negative
	if(number < 0) {
		isNegative = true;
                temp *= -1; 
		buffer[i] = '-';
		i = 1;
        } 
	
	// Count digits of number
	while(temp) {
    		nDigit++;
		size++;
                temp /= 10;
      	}	
        
	// Convert number to char array            
	for (; i < MAX_INT_LENGTH; i++) {
		if (nDigit == 0) 
			buffer[i] = '\0';
		else {
			buffer[i] = (char)((number / (pow(10, nDigit - 1)) % 10) + 48);
			nDigit--;
		}
	}
	
	gSynchConsole->Write(buffer, i);
       	delete buffer;
        return;
}

char ReadChar() {
	char buffer[MAX_INT_LENGTH];
	int size = gSynchConsole->Read(buffer, MAX_INT_LENGTH);
	if (size > 1) {
		printf("\nError: Only 1 character is allowed.\n");
		machine->WriteRegister(2, 0);
		return 0;
	}
	else if (numBytes == 0) {
		printf("\nError: Character cannot be null.\n");
		machine->WriteRegister(2, 0);
		return 0;
	}
	else {
		char ch = buffer[0];
		machine->WriteRegister(2, ch);
		return ch; 
	}
}

void PrintChar(char character) {
	gSynchConsole->Write(&character, 1);
}

void ReadString(char* buffer, int length) {
	int virtAddr = machine->ReadRegister(4); 	// Lay dia chi tham so buffer truyen vao tu thanh ghi so 4
	length = machine->ReadRegister(5); 		// Lay do dai toi da cua chuoi nhap vao tu thanh ghi so 5
	buffer = User2System(virtAddr, length); 	// Copy chuoi tu vung nho User Space sang System Space
	gSynchConsole->Read(buffer, length); 		// Goi ham Read cua SynchConsole de doc chuoi
	System2User(virtAddr, length, buffer); 		// Copy chuoi tu vung nho System Space sang vung nho User Space
	delete buffer;
}

void PrintString(char* buffer) {
	int virtAddr = machine->ReadRegister(4); 	// Lay dia chi cua tham so buffer tu thanh ghi so 4
	buffer = User2System(virtAddr, 1023); 		// Copy chuoi tu vung nho User Space sang System Space voi bo dem buffer dai 1023 ki tu
	int length = 0;

	while (buffer[length] != 0) 
		length++; 				// Dem do dai that cua chuoi

	gSynchConsole->Write(buffer, length + 1); 	// Goi ham Write cua SynchConsole de in chuoi
	delete buffer;
}

void
ExceptionHandler(ExceptionType which)
{
    	int type = machine->ReadRegister(2);

	switch (which)
	{
		case NoException:
			return;

		case PageFaultException:
			printf("\nNo valid translation found.\n");
			ASSERT(FALSE);
			break;

		case ReadOnlyException:
			printf("\nWrite attempted to page marked \"read-only\".\n");
			ASSERT(FALSE);
			break;

		case BusErrorException:
			printf("\nTranslation resulted in an invalid physical address.\n");
			ASSERT(FALSE);
			break;

		case AddressErrorException:
			printf("\nUnaligned reference or one that was beyond the end of the address space.\n");
			ASSERT(FALSE);
			break;

		case OverflowException:
			printf("\nInteger overflow in add or sub..\n");
			ASSERT(FALSE);
			break;

		case IllegalInstrException:
			printf("\nUnimplemented or reserved instr.\n");
			ASSERT(FALSE);
			break;

		case NumExceptionTypes:
			printf("\nNumExceptionTypes\n");
			ASSERT(FALSE);
			break;

    		case SyscallException 
			switch (type)
			{
				case SC_Halt:
					DEBUG('a', "Shutdown, initiated by user program.\n");
   					interrupt->Halt();
					break;	

				case SC_ReadInt:
					ReadInt();
					interrupt->Halt();
					IncreasePC();
					break;			

				case SC_PrintInt:
					PrintInt(ReadInt());
					interrupt->Halt();
					IncreasePC();
					break;		

				case SC_ReadChar:
					ReadChar();
					interrupt->Halt();
					IncreasePC();
					break;		

				case SC_PrintChar:
					PrintChar(ReadChar());
					interrupt->Halt();
					IncreasePC();
					break;		

				case SC_ReadString:
					char* buffer;
					int length;
					ReadString(buffer, length);
					interrupt->Halt();
					IncreasePC();
					break;		

				case SC_PrintString:
					char* buffer;
					int length;
					PrintString(buffer, length);
					interrupt->Halt();
					IncreasePC();
					break;		
			}
	
		default:
			printf("Unexpected user mode exception %d %d\n", which, type);
			ASSERT(FALSE);
    	}
}
