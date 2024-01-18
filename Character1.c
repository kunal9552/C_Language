#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckChar(char Alphabet)
{
	if((Alphabet >= 'A') && (Alphabet <= 'Z') )
	{
		return TRUE;
	}
	else
	{
		return FALSE;
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
		printf("It is Capital Character");
	}
	else
	{
		printf("It is not a Capital Character");
	}
	
	return 0;
}