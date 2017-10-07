#include<stdio.h>
#include<string.h>
char str[100],rev[100];
int n;
void readstring()
{
	int i;
	printf("enter the string to be reversed\n");
	scanf("%s",str);
	n=strlen(str);
	
}
void swapchar(char *a,char *b)
{
	
	char temp =*a;*a=*b;*b=temp;
}
	
void reverse()
{	
	int i,j;
	for(i=0;i<n/2;i++)
	{
		swapchar(&str[i],&str[n-i]);

	}
	
	printf("the reversed string is\n %s\n",str);
}
void main()
{
	readstring();
	reverse();
}

