#include<stdio.h>
#include<stdlib.h>

int Diff(int Arr[],int iNo)
{
	int iCnt = 0;
	int iCntEven = 0;
	int iCntOdd = 0;
	
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		if((Arr[iCnt] % 2 )== 0)
		{
			iCntEven++;
		}
		else
		{
			iCntOdd++;
		}
	}
	
	return iCntEven - iCntOdd;
	
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;
	
	printf("Enter the Number of Elements : ");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	printf("Enter %d Elements : \n",iSize);
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter element %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Diff(ptr,iSize);
	printf("Diffrence of even and Odd numbers : %d",iRet);
	free(ptr);
	
	return 0;
}