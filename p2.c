#include<stdio.h>
#include<string.h>
char str[100],pat[100],rep[100];
int patlen,replen;
void readstring();
void patternmatch();
void readstring()
{
	int i;
	printf("enter the main string\n");
	scanf("%s",str);
	printf("enter the pattern string\n");
	scanf("%s",pat);
	printf("enter the replace string\n");
	scanf("%s",rep);
	for(i=0;pat[i]!='\0';i++)
	{
		patlen++;
	}
	for(i=0;rep[i]!='\0';i++)
	{
		replen++;
	}

}
void patternmatch()
{
	int i,j,k,count=0;
	for(i=1;str[i]!='\0';i++)
	{
		j=0;
		while(str[i+j]==pat[j]&&(j<patlen))
		{
			j++;
			if(pat[j]=='\0')
			{
				count++;
				for(k=0;rep[k]!='\0';k++,i++)
				{
					str[i]=rep[k];
				}
				i=i-1;
			}
		}
	}
	if(count==0)
	{
		printf("pattern does not exist in main string\n");
	}
	else
	{
		printf("the number of occurances of the pattern: %d\n",count);
		printf("the main string after replacement is %s \n",str);
	}
}
void main()
{
	readstring();
	patternmatch();
}

