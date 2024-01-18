#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckNumber(int Arr[], int iNo,int iValue)
{
	int iCnt = 0;
	BOOL bFlag = FALSE;
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		if(Arr[iCnt] == iValue)
		{
			return TRUE;
		}
		else
		{
			 bFlag = FALSE;
		}
	}
	return bFlag;
	
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iCnt = 0;
	int iElement = 0;
	BOOL bRet = FALSE;
	
	
	printf("Enter the number of elements : ");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	printf("Enter %d Elements : \n");
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter the Element %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}	
	
	printf("Enter the element Want to search : ");
	scanf("%d",&iElement);
	
	bRet = CheckNumber(ptr,iSize,iElement);
	if(bRet == TRUE)
	{
		printf("Number is Present ");
	}
	else
	{
		printf("Number Not Present ");
	}
	
	free(ptr);
	
	
	return 0;
}
