#include <stdio.h>
#include "laba4.h"

int main()
{
	char str1[256];
	printf("Enter the string: ");
	fgets(str1, 255, stdin);
	char *a = str1;
	char* str2 = InsertSpace(a);
	StringOut(str2);

}