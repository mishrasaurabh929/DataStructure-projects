
#include<stdio.h>
#include<stdlib.h>
void tower(int n,char src,char temp,char dest)
{
	if(n==1)
	{
		printf("%d disc moved from %c to %c",n,src,dest);
		exit(0);
	}
	tower(n-1,src,dest,temp);
	printf("%d disc moved from %c to %c",n,src,temp);
	tower(n-1,temp,src,dest);
	printf("%d disc moved from %c to %c",n-1,temp,dest);
}
int main()
{
	int n;
	char a,b,c;
	printf("enter the number of disc\n");
	scanf("%d",&n);
	printf("%d",n);
	tower(n,a,b,c);
	return(0);
}
