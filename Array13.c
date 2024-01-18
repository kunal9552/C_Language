#include<stdio.h>
#include<stdlib.h>

void DisplayNum(int Arr[], int iNo, int iFrom, int iTo)
{
	int iCnt = 0;
	for(iCnt = 0; iCnt < iNo;iCnt++)
	{
		if(Arr[iCnt] > iFrom && Arr[iCnt] < iTo)
		{
			printf("%d ",Arr[iCnt]);
		}
	}
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;
	int iStart = 0;
	int iEnd = 0;
	
	
	printf("Enter the Number of elements : ");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	printf("Enter %d Elements : \n",iSize);
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter the Elemente %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter the Start : ");
	scanf("%d",&iStart);
	
	printf("ENter the End : ");
	scanf("%d",&iEnd);
	
	DisplayNum(ptr,iSize,iStart,iEnd);
	
	free(ptr);
	
	return 0;
}