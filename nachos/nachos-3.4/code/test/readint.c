#include"syscall.h"

int
main()
{
    int number = ReadInt();
    Halt();
    return 0;
}
