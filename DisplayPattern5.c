#include<stdio.h>

void DisplayPattern(int iNo)
{
	int iCnt1 = 0;
	int iCnt2 = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt1 = 1; iCnt1 <= iNo; iCnt1++)
	{
		printf("* ");
	}
	for(iCnt2 = 1; iCnt2 <= iNo; iCnt2++ )
	{
		printf("# ");
	}
	
}

int main()
{
	int iValue = 0;
	
	printf("Enter a Number : ");
	scanf("%d",&iValue);
	
	DisplayPattern(iValue);
	
	return 0;
}