#include<stdio.h>

void DiaplayNonFact(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1;iCnt <= iNo;iCnt++)
	{
		if((iNo % iCnt)!= 0)
		{
			printf("%d ",iCnt);
		}
	}
	
}
int main()
{
	int iValue = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	DiaplayNonFact(iValue);
	
	return 0;
}