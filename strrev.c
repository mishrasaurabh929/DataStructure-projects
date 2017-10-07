#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("enter the string\n");
	scanf("%s",str);
	char rev[100]=strrev(str);
	printf("the reversed string is %s\n",rev);
}
