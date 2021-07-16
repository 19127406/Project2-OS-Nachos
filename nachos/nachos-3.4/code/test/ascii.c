#include "syscall.h"

void print_ascii()
{
	char ch = 32;
	int i = 32;

	for(i; i < 255; i += 1)
	{
		if(i == 32)
		{
			PrintInt(i);
			PrintChar(' - ');
			PrintString("[space]");
			PrintChar('\t');
		}

		PrintInt(i);
		PrintChar(' - ');
		PrintChar(ch);
		PrintChar('\t');
		if(i % 6 == 0)
		{
			PrintChar('\n');
		}
		ch += 1;
	}
}

int
main()
{
	PrintString("ASCII table:\n");
	print_ascii();
	PrintString("\n\n");
    Halt();
    return 0;
}
