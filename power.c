#include<stdio.h>
int main()
{
	int  a,n,ans=1;
	printf("enter the limit");
	scanf("%d \n %d",&a,&n);
	ans	= pow(a,n);
	printf("%d to the power %d iS %d",a,n,ans);
	return 0;
	
}
