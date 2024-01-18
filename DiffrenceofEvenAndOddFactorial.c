#include<stdio.h>

int DiffFactorial(int iNo)
{
	int iCnt = 0;
	int iFactorial = 0;
	int EvenFactorial = 1;
	int OddFactorial= 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 1;iCnt <= iNo;iCnt++)
	{
		if((iCnt % 2) == 0)
		{
			EvenFactorial = EvenFactorial*iCnt;
			
		}
		else
		{
			OddFactorial = OddFactorial*iCnt;
		}
	}
	iFactorial = EvenFactorial - OddFactorial;
	return iFactorial;
	
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the Number : ");
	scanf("%d",&iValue);
	
	iRet = DiffFactorial(iValue);
	printf("Even Factorial is : %d",iRet);
	
	
	return 0;
	
}