#include<stdio.h>
#include<stdlib.h>

void DisplaySumOfDigit(int Arr[],int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	int iDigit = 0;
	
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		iSum = 0;
		while(Arr[iCnt] != 0)
		{
			iDigit = Arr[iCnt] % 10;
			iSum = iSum + iDigit;
			Arr[iCnt] = Arr[iCnt] / 10;
		}
		printf("%d ",iSum); 
	}
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iCnt = 0;
	
	printf("Enter the Number of Elements : ");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	printf("Enter %d Elements : \n",iSize);
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter Element %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	
	DisplaySumOfDigit(ptr,iSize);
	
	free(ptr);
	
	return 0;
}