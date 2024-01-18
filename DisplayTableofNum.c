#include<stdio.h>

void DisplayTable(int iNo)
{
	int iCnt = 0;
	int Result = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 1; iCnt <= 10; iCnt++)
	{
		Result = iNo*iCnt;
		printf("%d\n",Result);
	}
	
}

int main()
{
	int iValue = 0;
	
	printf("Enter a Number : ");
	scanf("%d",&iValue);
	
	DisplayTable(iValue);
	
	return 0;
}