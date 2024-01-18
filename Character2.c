#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckChar(char Alphabet)
{
	if((Alphabet >= 'A') && (Alphabet <= 'Z') || (Alphabet >= 'a') && (Alphabet <= 'z'))
	{
		return FALSE;
	}
	else 
	{
		return TRUE;
	}
}

int main()
{
	char ch = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter Character : ");
	scanf("%c",&ch);
	
	bRet = CheckChar(ch);
	if(bRet == TRUE)
	{
		printf("It is Digit");
	}
	else
	{
		printf("It is not a Digit");
	}
	
	return 0;
}