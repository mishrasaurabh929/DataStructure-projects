#include<stdio.h>
#include<math.h>
#include<ctype.h>
#define MAX 50
char s[MAX];
int top=-1;
void push(double elem)
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
double pop()
{	
	double del;
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
int eval(char operator,int op1,int op2)
{
	switch(operator)
	{
		case '+':return(op1+op2);
		case '-':return(op1-op2);
		case '*':return(op1*op2);
		case '/':return(op1/op2);
		case '%':return fmod(op1,op2);
		case '^':return pow(op1,op2);
		default :return(printf("invalid operator\n"));
	}
}
int main()
{	
	double elem;
	char postfix[MAX];
	printf("enter the postfix experession\n");
	scanf("%s",postfix);
	int i;
	double val,op1,op2,res;
	for(i=0;postfix[i]!='\0';i++)
	{
		if(isdigit(postfix[i]))
		{
			push(postfix[i]-'0');
		}
		
		else
		{
			op2=pop();
			op1=pop();
			res=eval(postfix[i],op1,op2);
			push(res);
		}
	}
	res=pop();
	printf("evaluated value is %lf",res);
	return (0);
}


		
		
		
		
		
		
		
		
		
		
		
		
		
		

