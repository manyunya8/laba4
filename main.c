#include <stdio.h>
#include "laba4.h"
#define SIZE 250

int main()
{
	char str[SIZE];
	printf("Enter the string: ");
	fgets(str, SIZE, stdin);
	char *a = str;
	printf("Result:\n");
	insertSpace(a);
	return 0;
}