#include<stdio.h>
#define MAX 100
int f[100],l,ht[100];
char buff[100];
void probe(int k,int key)
{
	l=k%MAX;
	if(ht[l]==0)
	{
		ht[l]=key;
	}
	else
	{
		probe(k+1,key);
	}
}
void display()
{
	for(int i=0;i<MAX;i++)
	{	
		printf("%d\n",ht[i]);
	}
}
void main()
{
	FILE *fp;
	fp=fopen("data.txt","r");
	int i =0;
	while(fscanf(fp,"%d",&f[i]),!feof(fp))
	{
		fscanf(fp,"%[^\n]s",buff);
		i++;
	}
	for(int j=0;j<=i;j++)
	{
		l=f[j]%MAX;
		if(ht[l]==0)
		{
			ht[l]=f[j];
		}
		else
		{
			probe(f[j]+1,f[j]);
		}
	}
	display();
}
		
