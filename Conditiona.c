#include<stdio.h>

void DisplayResult(int iNo)
{
	if(iNo < 50)
	{
		printf("Small");
	}
	else if((iNo > 50) && (iNo <100))
	{
		printf("Medium");
	}
	else if(iNo > 100)
	{
		printf("Large");
	}
	
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number :\n");
	scanf("%d",&iValue);
	
	DisplayResult(iValue);
	
	return 0;
}