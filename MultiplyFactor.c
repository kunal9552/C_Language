#include<stdio.h>

int MultFact(int iNo)
{
	int iCnt = 0;
	int iMul = 1;
	for(iCnt = 1;iCnt <= iNo/2; iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			iMul = iMul*iCnt;
		}
	}
	return iMul;
}


int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the Number: \n");
	scanf("%d",&iValue);
	
	iRet = MultFact(iValue);
	
	printf("Multipication of factors is : %d\n",iRet);
	
	
	return 0;
}