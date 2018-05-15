#include<stdio.h>
int main()
{
	char s[100];
	int i=0;
	int flag=0;
	printf("Enter the string\n");
	gets(s);
	
	
	while(s[i]!='\0')
	{
		if(s[0]>=97 && s[0]<= 122)
		{
			s[0]=s[0]-32;
		}
		if(s[i]== ' ')
		{
			flag=1;
			if(s[i+1]>=97 && s[i+1]<=122)
			{
			s[i+1]=s[i+1]-32;
			
		    }
		}
		else if(s[i]>=65 && s[i]<=91)
		{
			if(flag==0)
			s[i]=s[i]+32; 
			
			else 
			flag=0;
		}
		
		i++;
	}
	
	printf("%s",s);
}
