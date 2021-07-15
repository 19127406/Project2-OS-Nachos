#include "syscall.h"

int
main()
{
    char ch;
    ch = ReadChar();
    Halt();
    return 0;
}
