#include<stdio.h>
int main(void)
{
	int i,n,s=0;
	printf("enter limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	printf("%d",s);
	return 0;
}
