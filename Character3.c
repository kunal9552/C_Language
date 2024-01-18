#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckChar(char Alphabet)
{
	if((Alphabet >= 'a') && (Alphabet <= 'z') )
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
		printf("It is Small Case Character");
	}
	else
	{
		printf("It is not a Small Case Character");
	}
	
	return 0;
}