#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckChar(char CH)
{
	if((CH >= 'A') && (CH <= 'Z') || (CH >= 'a') && (CH <= 'z') )
	{
		return FALSE;
	}
	else if((CH=='!')||(CH=='@')||(CH=='#')||(CH=='$')||(CH=='%')||(CH=='^')||(CH=='&')||(CH=='*'))
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
		printf("It is Special Character");
	}
	else
	{
		printf("It is not a Special Character");
	}
	
	return 0;
}