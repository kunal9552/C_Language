#include<stdio.h>

int ConvertinMeter(int iValue)
{
	int iMeter = 1000;
	int iAns = iValue*iMeter;
	return iAns;
	
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the Distance int KM :");
	scanf("%d",&iValue);
	
	iRet = ConvertinMeter(iValue);
	
	printf("In meter : %d",iRet);
	
	return 0;
}