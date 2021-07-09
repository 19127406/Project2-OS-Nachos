#include"syscall.h"
#include"copyright.h"

#define maxlen 32

int main(){
	int len;
	char filename[maxlen + 1];

	if(Create("text.txt") == -1)
	{
		print("\n Create file ~");
		print(filename);
		print(" fail.");
	}
	else
	{
		print("\n Create file ~");
		print(filename);
		print(" success.~");
	}
	Halt();
}