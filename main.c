#include <stdio.h>
#include "laba4.h"
#define SIZE 250

int main()
{
	char str[SIZE];
	char res[SIZE * 2];
	printf("Enter the string:\n");
	fgets(str, SIZE, stdin);
	printf("Result:\n");
	insertSpace(str, res);
	printf("%s", res);
	return 0;
}