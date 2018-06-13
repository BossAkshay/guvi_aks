#include<stdio.h>
int main(void)
{
	int a[10],i,k,n,sum=0;
	printf("enter the limit");
	printf(" \nenter the no. what u want to sum ");
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=k;i++)
	{
		sum=sum+i;
	}
		printf("%d",sum);
		return 0;
	}
	
