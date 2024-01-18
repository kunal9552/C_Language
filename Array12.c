#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iNo, int iElement)
{
	int iCnt = 0;
	int iIndex = -1;
	
	for(iCnt = iNo; iCnt >= 0; iCnt--)
	{
		if(Arr[iCnt] == iElement)
		{
			iIndex = iCnt;
			break;
		}
	}
	return iIndex;
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;
	int iValue = 0;
	
	printf("Enter the Number of elements : ");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	printf("ENter %d Elements : \n",iSize);
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter Element %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter the element that we have to find index : ");
	scanf("%d",&iValue);
	
	iRet = LastOcc(ptr,iSize,iValue);
	if(iRet == -1)
	{
		printf("There is no such Number");
	}
	else
	{
		printf("Last occurrence of number is %d",iRet);
	}
	
	free(ptr);
	
	
	return 0;
}