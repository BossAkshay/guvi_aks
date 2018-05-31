#include<stdio.h>
#include<math.h>
int main()
{
	long int n,r,i,sum=0;
	printf("Enter the number");
	scanf("%ld",&n);
	
	while(n!=0)
	{
		r=n%10;
		sum=sum+pow(r,2);
		n=n/10;
	}
	printf("%ld",sum);
}
