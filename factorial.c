#include<stdio.h>
int main()
{
	int fact=1,n;
	printf("Enter the number");
	scanf("%d",&n);
	if(n==0)
	printf("1");
	else{
	
	while(n!=0)
	{
		fact=fact*n;
		n--;
	}
	printf("%d",fact);
}
}
