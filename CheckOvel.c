#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CH)
{
	if(CH == 'A' || CH == 'a' || CH == 'E' || CH == 'e' || CH == 'I' || CH == 'i' || CH == 'O' || CH == 'o' || CH == 'U' || CH == 'u' )
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
	char cValue = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter character\n");
	scanf("%c",&cValue);
	
	bRet = ChkVowel(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is vowel");
	}
	else
	{
		printf("It is not Vowel");
	}
	
	
	return 0;
}