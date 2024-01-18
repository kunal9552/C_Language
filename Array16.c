#include<stdio.h>
#include<stdlib.h>

int SmallNo(int Arr[],int iNo)
{
	int iCnt = 0;
	int iMin = Arr[0];
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		if(Arr[iCnt] < iMin)
		{
			iMin = Arr[iCnt];
		}
	}
	return iMin;
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
	
	printf("Enter %d elements : \n",iSize);
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter Element %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = SmallNo(ptr,iSize);
	printf("Small number is : %d",iRet);
	
	free(ptr);
	
	
	return 0;
}