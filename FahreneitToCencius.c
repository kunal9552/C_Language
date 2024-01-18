#include<stdio.h>

double Celsius(int iFahreneit)
{
	
	double Ans = 0.0;
	Ans = ((iFahreneit - 32) * ((double)5/9));
	return Ans;
	
}

int main()
{
	int fValue = 0.0;
	double dRet = 0.0;
	
	printf("Enter the Temp in Fahreneit : ");
	scanf("%d",&fValue);
	
	dRet = Celsius(fValue);
	printf("In Celsius : %f",dRet);
	
	return 0;
}