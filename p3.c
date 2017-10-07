#include<stdio.h>
#define MAX 10
int top=-1;
int s[MAX-1];
void push(int elem)
{
	if(top==MAX-1)
	{
		printf("stack overflow\n");
	}
	else
	{
		top=top+1;
		s[top]=elem;
	}
}
int pop()
{
	int del=0;
	if(top==-1)
	{
		printf("stack underflow\n");
	}
	else
	{
		del=s[top];
		top=top-1;
		return (del);
	}
}
void palindrome()
{
	int n,i,p[10],flag=0;
	printf("enter the number of digits\n");
	scanf("%d",&n);
	printf("enter the digits\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
		push(p[i]);
	}
	for(i=0;i<n;i++)
	{
		if(p[i]==pop())
		{
			flag=0;
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{	
		printf("it is a palindrome\n");
	}
	else
	{
		printf("it is not a palindrome\n");
	}
}
void display()
{	
	int i;
	if(top==-1)
	{
		printf("stack is empty\n");
		return;
	}
	printf("the elements of stack are \n");
	for(i=top;i>=0;i--)
	{
	
		printf("\t%d\n",s[i]);
	}
	
}
int main()
{	
	int ch,elem,del_elem,flag;
	printf("1.push\n2.pop\n3.check entered number is palindrome or not\n4.display\n5.exit\n");
	for(;;)
	{
		printf("enter the number of choice of operation you want to do\n");	
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter the elements\n");
				scanf("%d",&elem);
				push(elem);
				break;
			case 2:del_elem=pop();
				printf("the deleted element is %d\n",del_elem);
				break;		
		
			case 3:palindrome();
				break;
			case 4:display();
				break;
			case 5:return(0);
				break;
			default:printf("invalid choice\n");
		}
	}
	return 0;
} 
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
