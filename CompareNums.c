#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0;

BOOL CheckEqual(int iNo1,int iNo2)
{
	if(iNo1 == iNo2)
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
	int iValue1 = 0;
	int iVAlue2 = 0;
	BOOL iRet = FALSE;
	
	printf("Enter first number : \n");
	scanf("%d",&iValue1);
	
	printf("Enter Second Number : \n");
 	scanf("%d",&iVAlue2);
	
	iRet = CheckEqual(iValue1,iVAlue2);
	if(iRet == TRUE)
	{
		printf("Equal");
	}
	else
	{
		printf("Not Equal");
	}
	
	return 0;
}	