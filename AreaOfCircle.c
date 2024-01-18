#include<stdio.h>

double CircleArea(float fRadius)
{
	float fPi = 3.14;
	double Area = 0;
	
	Area = fPi*fRadius*fRadius;
	return Area;
	
}

int main()
{
	float fValue = 0.0;
	double dRet = 0.0;
	
	printf("Enter Radius :\n");
	scanf("%f",&fValue);
	
	dRet = CircleArea(fValue);
	printf("Area of Circle is : %f",dRet);
	
	return 0;
}