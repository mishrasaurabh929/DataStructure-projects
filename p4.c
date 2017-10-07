#include<stdio.h>
#include<ctype.h>
#define MAX 50
char s[MAX];
int top=-1;
void push(char elem)
{	
	if(top==MAX-1)
	{
		printf("Stack overflow\n");
	}
	else
	{	
		top=top+1;
		s[top]=elem;
		
	}
}
char pop()
{	
	char del;
	if(top==-1)
	{	
		printf("stack underflow\n");
	}
	else
	{
		del=s[top];
		top=top-1;
		return(del);
	}
}
int priority(char c)
{
	switch(c)
	{
		case '#':return 0;
		case '(':return 1;
		case '-':
		case '+':return 2;
		case '*':
		case '/':
		case '%':return 3;
		case '^':
		case '$':return 4;
	}
}
void main()
{
	char infix[50],postfix[50];
	int i=0,j=0;
	printf("enter the expression\n");
	scanf("%s",infix);
	push('#');
	for(i=0;infix[i]!='\0';i++)
	{
		if(isalnum(infix[i]))
		{
			postfix[j++]=infix[i];
		}
		else if(infix[i]=='(')
		{	
			push(infix[i]);
		}
		else if(infix[i]==')')
		{
			while(s[top]!='(')
			{
				postfix[j++]=pop();
			}
			top=top-1;
		}
		else
		{
			while(priority(s[top])>=priority(infix[i]))
			{	
				postfix[j++]=pop();
			}
			push(infix[i]);
		}
	}
	while(s[top]!='#')
	{
		postfix[j++]=pop();
	}
		
		postfix[j]='\0';	
		printf("the postfix expression is %s\n",postfix);
		
	
		
}
	
	
	
	
	
	
	
	
	
	
		
