#include "syscall.h"

int main() {
	char str[255];
	int length = 255;
	ReadString(str, length);
	return 0;
}
