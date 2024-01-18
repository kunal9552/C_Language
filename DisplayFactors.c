#include<stdio.h>


void DiaplayDec(int iNo)
{
	int iCnt = 0;

	for(iCnt = iNo/2;iCnt >=1;iCnt--)
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d ",iCnt);
		}
	}
	
}

int main()
{
	int iValue = 0;
	
	printf("ENter a number : \n");
	scanf("%d",&iValue);
	
	DiaplayDec(iValue);
	
	return 0;
}