#include<stdio.h>

int DifOfFacNFac(int iNo)
{
	int iCnt = 0;
	int iSumOffact = 0;
	int iSumofNfact = 0;
	int iDif = 0;
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt)== 0)
		{
			iSumOffact = iSumOffact + iCnt;
		}
		else if((iNo % iCnt)!= 0)
		{
			iSumofNfact = iSumofNfact +iCnt;
		}
	}
	
	iDif = iSumOffact - iSumofNfact;
	return iDif;
}

int main()
{
	
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	iRet = DifOfFacNFac(iValue);
	
	printf("Diffrence bertween Summation of Factors And non-factors is : %d",iRet);
	
	return 0;
}