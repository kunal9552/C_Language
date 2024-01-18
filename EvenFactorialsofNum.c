#include<stdio.h>

int EvenFactorial(int iNo)
{
	int iCnt = 0;
	int iFactorial = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 1;iCnt <= iNo;iCnt++)
	{
		if((iCnt % 2) == 0)
		{
			iFactorial = iFactorial*iCnt;
		}
	}
	return iFactorial;
	
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the Number : ");
	scanf("%d",&iValue);
	
	iRet = EvenFactorial(iValue);
	printf("Even Factorial is : %d",iRet);
	
	
	return 0;
	
}