#include<stdio.h>

void RevTable(int iNo)
{
	int iCnt = 0;
	int Result = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 10;iCnt > 0; iCnt--)
	{
		Result = iNo*iCnt;
		printf("%d\n",Result);
	}
	
}


int main()
{
	int iValue = 0;
	
	printf("Enter the Number : ");
	scanf("%d",&iValue);
	
	RevTable(iValue);
	
	return 0;
}