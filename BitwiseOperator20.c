/*
	Write a program which accept one number from user and range of
positions from user. Toggle all bits from that range.
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
	UINT iMask = 0X00000001;
	UINT iResult = 0;
	int i = 0;
	iMask = iMask << (iStart - 1);
	iResult = iNo ^ iMask;
	
	for(i = iStart; i < iEnd; i++)
	{
		iMask = iMask << 1;
		iResult = iResult ^ iMask;
	}
	
	return iResult;
}

int main()
{
	UINT iNum = 0;
	int iStart = 0;
	int iEnd = 0;
	UINT uRet = 0;
	
	printf("Enter the number :\n");
	scanf("%d",&iNum);
	
	printf("Enter the range from \n");
	scanf("%d",&iStart);
	
	printf("to\n");
	scanf("%d",&iEnd);

	uRet = ToggleBitRange(iNum, iStart, iEnd);
	printf("Number is : %d\n",uRet);

	return 0;
}
