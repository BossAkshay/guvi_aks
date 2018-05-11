#include<stdio.h>
int reversenum(int num,int l)
{
	int r,sum=0;
	while(num!=0)
	{
		r=num%10;
		sum=sum+r*pow(10,--l);
		num=num/10;
		
	}
	return sum;
}
int main()
{
	int n,i,len=0,t,result;
	printf("Enter the number");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		len++;
		t=t/10;
	}
result=reversenum(n,len);
printf("%d",result);
}
