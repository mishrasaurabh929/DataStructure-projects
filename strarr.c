#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n;
void main()
{
	char a[10][20],key[30];
	int n,ch,pos;
	while(1)
	{
		printf("\nenter the choice\n1.create\n2.display\n3.insert\n4.delete\n5.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create (a);
				break;
			case 2:
				display(a);
				break;
			case 3:
				printf("enter the position of insertion\n");
				scanf("%d",&pos);
				printf("enter the string to be inserted");
				scanf("%s",key);
				insert(a,pos,key);
			case 4:
				delete(a,pos);
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("invalid choice\n");
				break;
		}
	}
}
void create(char a[10][20])
{	
	int i;
	printf("enter the number of strings\n");
	scanf("%d",&n);
	printf("enter the strings\n");
	for(i=0;i<n;i++)
	{	
		scanf("%s",a[i]);
	}
}
void display(char a[10][20])
{
	int i;
	printf("the strings are ");
	for(i=0;i<n;i++)
	{
		printf(
	
	






























				
