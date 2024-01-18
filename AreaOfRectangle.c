#include<stdio.h>

double RectangleArea(float fWidth, float fHeight)
{
	double Area = 0.0;
	
	Area = fWidth*fHeight;
	return Area;
	
}

int main()
{
	float fValue1 = 0.0;
	float fValue2 = 0.0;
	double dRet = 0.0;
	
	printf("Enter the Width : ");
	scanf("%f",&fValue1);
	
	printf("Enter the Height : ");
	scanf("%f",&fValue2);
	
	dRet = RectangleArea(fValue1,fValue2);
	
	printf("Area of Rectangle is : %f",dRet);
	
	
	return 0;
}
