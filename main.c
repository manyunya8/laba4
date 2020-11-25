#include <stdio.h>
#include "laba4.h"
#define SIZE 250

int main()
{
	char str[SIZE];
	char res[SIZE * 2];
	char* s = str;
	char* r = res;
	printf("Enter the string:\n");
	fgets(str, SIZE, stdin);
	printf("Result:\n");
	insertSpace(s,r);
	printf("%s", res);
	return 0;
}