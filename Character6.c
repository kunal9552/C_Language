#include<stdio.h>

void Display(char ch)
{
	
	if((ch >= 'A') && (ch <= 'Z'))
	{
		for(char cCnt = ch; cCnt <= 'Z';cCnt++ )
		{
			printf("%c ",cCnt);
		}		
	}
	else if((ch >='a') && (ch <= 'z'))
	{
		for(char cCnt = ch; cCnt >= 'a';cCnt-- )
		{
			printf("%c ",cCnt);
		}	
	}
	else
	{
		printf("");
	}	
	
}

int main()
{
	char cValue = '\0';
	
	printf("Enter the Character : ");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}