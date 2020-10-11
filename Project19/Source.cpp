#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[80];
	int i, length;
	printf("Enter string : ");
	gets_s(str);
	length = strlen(str);
	printf("Result : ");
	for (i = length - 1; i >= 0; i--) printf("%c", toupper(str[i]));
	printf("\n");
	return 0;
}