#include<stdio.h>
int main()
{
	char s[1000000],temp;
	int i=0,j=1;
	printf("Enter the string");
	gets(s);
	
	while(s[i]!='\0')
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		i+=2;
		j+=2;
	}
	printf("%s",s);
}
