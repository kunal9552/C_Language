#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iNo, int iElement)
{
	int iCnt = 0;
	int iFlag = -1;
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		if(Arr[iCnt] == iElement)
		{
			iFlag = iCnt;
			break;
		}
	}
	return iFlag;
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;
	int iValue = 0;
	
	printf("Enter the number of elements : ");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	printf("Enter %d Elements : \n",iSize);
	
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		printf("Enter the Element %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	printf("ENter the Element : ");
	scanf("%d",&iValue);
	
	iRet = FirstOcc(ptr,iSize,iValue);
	if(iRet == -1)
	{
		printf("There is no such Number ");
	}
	else
	{
		printf("First Occurence of number is %d",iRet);
	}
	
	free(ptr);
	
	return 0;
}