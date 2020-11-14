#include <stdio.h>
#include "laba4.h"

int main()
{
	char str1[SIZE];
	printf("Enter the string: ");
	fgets(str1, SIZE, stdin);
	char *a = str1;
	char* str2 = insertSpace(a);
	printf(str2);
	return 0;
}