#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int s[MAX];
int top=-1;
void push(int elem)
{
	if(top==MAX-1)
	{
		printf("stack overflow!!!\n");
	}
	s[top]=elem;
	top=top+1;
}
int pop()
{
	int del;
	if(top==-1)
	{
		printf("stack underflow!!!\n");
	}
	del=s[top];
	top=top-1;
	return(del);
}
void main()
{
	int i=0,n;
	printf("enter the number of elements\n");
	scanf("%d",&n);
