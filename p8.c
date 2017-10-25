#include<stdio.h>
#include<stdlib.h>
struct emp
{
	char ssn[20],name[20],dept[10],des[10];
	struct emp *llink,*rlink;
};
typedef struct emp *employee;
employee start =NULL;
employee create()
{
	employee new;
	new =(employee)malloc(sizeof(struct emp));
	if(new == NULL)
	{
		printf("memory not allocated\n");
		return(0);
	}
	printf("enter the details of the employee\n");
	printf("enter the ssn");
	scanf("%s",new->ssn);
	printf("enter the employee name\n");
	scanf("%s",new->name);
	printf("enter the department\n");
	scanf("%s",new->dept);
	printf("enter the designation\n");
	scanf("%s",new->des);
	new->llink=NULL;
	new->rlink=NULL;
	return(new);
}
void createlist()
{
	int i,n;
	printf("enter number of employes\n");
	scanf("%d",&n);
	employee node,temp;
	for(i=0;i<n;i++)
	{	
		node =create();
		if(start==NULL)
		{	
		start=node;
		}
		else
		{
			temp=start;
			while(temp->rlink!=NULL)
			{
				temp=temp->rlink;
			}
			temp->rlink=node;
			node->llink=temp;
		}
	}
}
void status()
{
	employee temp;
	int count=0;
	if(start==NULL)
	{
		printf("list is empty\n");
		return;
	}
	temp=start;
	printf("the employee details are\n");
	while(temp!= NULL)
	{
		printf("%s\n%s\n%s\n%s\n",temp->ssn,temp->name,temp->dept,temp->des);
		temp=temp->rlink;
	}
}
void insertend()
{
	employee new,temp;
	new=create();
	temp=start;
	while(temp->rlink!=NULL)
	{
		temp=temp->rlink;
	}
	temp->rlink=new;
	new->llink=temp;
}
void delend()
{
	employee temp;
	temp=start;
	while(temp->rlink!=NULL)
	{
		temp=temp->rlink;
	}
	temp->llink->rlink=NULL;
	free(temp);
}
void insertfront()
{	
	employee new;
	new=create();
	new->rlink=start;
	start->llink=new;
	start=new;
}
	
void delfront()
{
	if(start==NULL)
	{
		printf("empty list\n");
		return;
	}
	employee temp;
	temp=start;
	start=start->rlink;
	start->llink=NULL;
	free(temp);
}
void queue()
{
	int i;
	printf("double ended queue operations :\n");
	printf("1.insert front\n2.delet front \n3.insert end\n4.delete end\n5.exit\n");
	while(1)
	{
		printf("enter your choice\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:insertfront();
				break;
			case 2:delfront();
				break;
			case 3: insertend();
				break;
			case 4: delend();
				break;
			case 5: return;
			default:
				printf("INVALID CHOICE\n");
		}
	}
}
void main()
{
	int i;
	while(1)
	{
		printf("doubly linked list operations \n");
		printf("1.create list\n2.display\n3.insert end\n4.insert front\n5.delete end\n6.delete front\n7.queue operations\n8.exit\n");
		printf("enter your choice\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:createlist();
				break;
			case 2:status();
				break;
			case 3:insertend();
				break;
			case 4:insertfront();
				break;
			case 5: delend();
				break;
			case 6: delfront();
				break;
			case 7: queue();
				break;
			case 8: exit(0);
			default:
				printf("invalid choice\n");
		}
	}
}		
