#include "syscall.h"

int A[100];
char c1 = ' ';

void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void bubble_sort(int num_ele)
{
	int i = 0;
	int j = i + 1;
	for(i; i < num_ele; i += 1)
	{
		for(j; j < num_ele; j += 1)
		{
			if(A[i] > A[j])
				swap(A[i], A[j]);
		}
	}
}

void PrintArray(int num_ele)
{
	int i = 0;
	for(i; i < num_ele; i += 1)
	{
		PrintInt(A[i]);
		PrintChar(c1);
	}
	PrintChar('\n');
}

int
main()
{
	int n = 0;
	int i = 0;

    PrintString("Input size of array: ");
    n = ReadInt();
    if(n > 100)
    {
    	PrintString("Array must have size below or equal 100\nEnd program\n");
    	return 0;
    }

    PrintString("Input array elements:\n");
    for(i; i < n; i += 1)
    {
    	PrintString("element - ");
    	PrintInt(i);
    	PrintString(" : ");
    	A[i] = ReadInt();
    	PrintChar('\n');
    }

    PrintString("Input array: ");
    PrintArray(n);
    bubble_sort(n);
    PrintString("\nSorted array: ");
    PrintArray(n);

    return 0;
}
