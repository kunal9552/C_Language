#include<stdio.h>

void ConvertCase(char cChar)
{
	if(cChar >=65 && cChar<=90)
	{
		cChar = (cChar+32);
		printf("%c",cChar);
	}
	else if(cChar >=97 && cChar<=122)
	{
		cChar = (cChar-32);
		printf("%c",cChar);
	}
	
}

int main()
{
	char cValue = '\0';
	
	printf("Enter Character\n");
	scanf("%c",&cValue);
	
	ConvertCase(cValue);
	
	return 0;
}
	
	