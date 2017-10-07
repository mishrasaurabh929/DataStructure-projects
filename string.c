#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n;
void main()
{
	int n,a[10][20],ch,pos,key;
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
				printf("enter the position where element is inserted\n");
				scanf("%d",&pos);
				printf("enter the element\n");
				scanf("%d",&key);
				insert(a,pos,key);
				break;
			case 4:
				delete(a,pos);
				break;
			case 5:
				exit (0);
				break;
			default: 
				printf("invalid choice\n");
				return;
		}
		}
}
void create(int a[])
{	
	int i;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void display(int a[20])
{
	int i;
	printf("the array is ;  ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void insert(int a[20],int pos,int key)
{
	int i;
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=key;
	n=n+1;
}
void delete(int a[20],int pos)
{
	int i;
	printf("enter the position to be deleted\n");
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
}	
