#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iNo)
{
	int iCnt = 0;
	int iFrequency = 0;
	
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		if((Arr[iCnt] %2 ) == 0)
		{
			iFrequency++;
		}
	}
	return iFrequency;
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;
	
	printf("Enter the number of elements : ");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	printf("Enter %d elements : \n",iSize);
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter element %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = CountEven(ptr,iSize);
	printf("Count od=f even numbers is : %d ",iRet);
	
	free(ptr);
	
	return 0;
}