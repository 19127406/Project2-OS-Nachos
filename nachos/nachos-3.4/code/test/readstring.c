#include "syscall.h"

int
main()
{
    char buffer[200];
    PrintString("Input a string: ");
    ReadString(buffer, 200);
    PrintString(buffer);
    PrintString("\n");
    Halt();
    return 0;
}
