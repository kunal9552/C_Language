#include<stdio.h>
#include<stdlib.h>

int Diff(int Arr[], int iNo)
{
	int iCnt = 0;
	int iMax = Arr[0];
	int iMin = Arr[0];
	int iDiff = 0;
	
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		if(Arr[iCnt] > iMax)
		{
			iMax = Arr[iCnt];
		}
	}
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		if(Arr[iCnt] < iMin)
		{
			iMin = Arr[iCnt];
		}
	}
	iDiff = iMax - iMin;
	return iDiff;
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;
	
	printf("Enter the Number of elements : ");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	printf("Enter %d Elements : \n",iSize);
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter element %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Diff(ptr,iSize);
	
	printf("Diffrence is : %d",iRet);
	
	free(ptr);
	
	return 0;
}