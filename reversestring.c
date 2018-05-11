#include<stdio.h>
#include<string.h>
int main()
{
	char s[100000],i,n,j,temp;
	printf("Enter the string ");
	gets(s);
	n= strlen(s);
	i=0;
	j=n-1;
	while(j>=n/2)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		i++;
		j--;
	}
	printf("%s",s);
}
