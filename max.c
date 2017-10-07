#include<stdio.h>
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
	int i,n,ele,d,op1;
	int max=0,min=0;
	
	printf("enter the number of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&ele);
	push(ele);
	}
	max=min=pop();
	for(i=0;i<n;i++)
	{
		op1=pop();
		if(op1>=max)
		{
			max=op1;
		}
		if(op1<=min)
		{
			min=op1;
		}
	}
	printf("the maximum element is %d and minimum element is %d \n",max,min);
}	
		
		
	
	

		
