#include<stdio.h>

void DisplayNum(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1;iCnt <= iNo;iCnt++)
	{
		printf("%d ",iCnt);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the Number :\n");
	scanf("%d",&iValue);
	
	DisplayNum(iValue);
	
	return 0;
}