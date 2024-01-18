#include<stdio.h>
#include<stdlib.h>

int ElementFrequency(int Arr[], int iValue, int iNo)
{
	int iCnt = 0;
	int iCount = 0;
	for(iCnt = 0; iCnt < iValue; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			iCount++;
		}
	}
	return iCount;
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iElement = 0;
	int iCnt = 0;
	int iRet = 0;
	
	printf("Enter the number of elements : ");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	printf("Enter the %d Elements : \n",iSize);
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter the element %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	printf("Enter the Elemen that you have to find : ");
	scanf("%d",&iElement);
	
	iRet = ElementFrequency(ptr,iSize,iElement);
	printf("Frequency of an Element %d is : %d ",iElement,iRet);
	
	free(ptr);
	
	return 0;
}