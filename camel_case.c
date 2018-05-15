#include<stdio.h>
int main()
{
	char s[100];
	int i=0;
	printf("Enter the string\n");
	gets(s);
	
	
	while(s[i]!='\0')
	{
		if(s[0]>=97 && s[i]<= 122)
		{
			s[0]=s[0]-32;
		}
		if(s[i]==' ')
		{
			s[i+1]=s[i+1]-32;
			
		}
		i++;
	}
	
	printf("%s",s);
}
