#include<stdio.h>
int main()
{
	long long int fact=1,n;
	printf("Enter the number");
	scanf("%d",&n);
	
	while(n!=0)
	{
		fact=fact*n;
		n--;
	}
	printf("%d",fact);
}
