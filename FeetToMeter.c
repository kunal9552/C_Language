#include<stdio.h>

double FeetToMeter(int iNo)
{
	double Ans = 0;
	double SquareMeter = 0.0929;
	
	Ans = iNo * SquareMeter;
	return Ans;
	
}

int main()
{
	int iValue = 0;
	double dRet = 0.0;
	
	printf("Enter the Square feet : ");
	scanf("%d",&iValue);
	
	dRet = FeetToMeter(iValue);
	printf("In Meter : %f",dRet);
	
	return 0;
}