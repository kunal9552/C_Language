#include<stdio.h>

int Factorial(int iNo)
{
	int iCnt = 0;
	int Fact = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt = iNo; iCnt > 0; iCnt--)
	{
		Fact = Fact*iCnt;
	}
	return Fact;

}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the Number :\n");
	scanf("%d",&iValue);
	
	iRet = Factorial(iValue);
	printf("Factorial is :%d ",iRet);
	
	return 0;
}