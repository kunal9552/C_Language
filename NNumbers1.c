#include<stdio.h>

void DisplayNum(int iStart , int iEnd)
{
	if(iStart > iEnd)
	{
		printf("Invalid Range ");
	}
	int iCnt = 0;
	for(iCnt = iStart;iCnt <= iEnd; iCnt++)
	{
		printf("%d ",iCnt);
	}
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter the Starting : ");
	scanf("%d",&iValue1);
	
	printf("Enter the Last Number : ");
	scanf("%d",&iValue2);
	
	DisplayNum(iValue1,iValue2);
	
	
	return 0;
}