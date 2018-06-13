#include<stdio.h>
int main(void)
{
	char ch;
	printf("enter the  consonant\n");
	scanf("%c",ch);
	if(ch== 'a' || ch == 'A' || ch == 'e' || ch =='E' || ch == 'i' || ch == 'I' || ch =='o' || ch == 'O' || ch == 'u' || ch == 'U')
	{
	
	
		printf("%c character is vowel.\n",ch);
}
else
{

printf("%c character is not vowel.\n",ch);
}

return 0;
	 
}
