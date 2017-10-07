#include<stdio.h>
#define size 5
int f=-1,r=-1;
char cq[size];
void insert(char elem)
{	
	if((f==0 && r==size-1)||(f-r==1))
	{
		printf("queue overflow\n");
		return;
	}
	else
	{
		if(f==-1)
		{
			f=0;
		}
		r=(r+1)%size;
		cq[r]=elem;
		
	}
}
void delete()
{
	char del;
	if(f==-1 && r==-1)
	{
		printf("queue underflow\n");
		return;
	}
	del=cq[f];
	printf("the delted element is %c",del);
	
	if(f==r)
	{
		f=-1;
		r=-1;
	}
	else
	f=(f+1)%size;
}
void display()
{
	int i;
	if(f==-1)
	{
		printf("queue underflow\n");
	}
	printf("the elements of queue are \n");
	i=f;
	do
	{
		printf("%c\n",cq[i]);
		i=(i+1)%size;
	}while(i!=r+1);
	
}
void sort()
{
	int i,j;
	int pos;
	for(i=0;i!=r;i=(i+1)%size)
	{
		pos=i;
		for(j=(i+1)%size; j!=r+1 ;j=(j+1)%size)
		{
			if(cq[j]<cq[pos])
			{
				pos=j;
			}
		}
		char temp;
		temp=cq[pos];
		cq[pos]=cq[i];
		cq[i]=temp;
	}
	display();
}		
int main()
{
	int ch;
	char elem;
	for(;;)
	{
		printf("enter the number of choice of operation\n1.insert\n2.delete\n3.display\n4.quit\n5.sort\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the elements\n");
				scanf("\n%s",&elem);
				insert(elem);
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				return (0);
			
			case 5:
				sort();
				break;
			default:
				printf("invalid choice\n");
		}
	}
}




























































