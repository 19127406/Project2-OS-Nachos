#include "syscall.h"

int main() {
	
	int number;
	PrintString("Input a number: ");
	number = ReadInt();
	PrintString("Inputted number: ");
	PrintInt(number);
	Halt();
	return 0;
}
