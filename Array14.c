#include<stdio.h>
#include<stdlib.h>

int ProductofODD(int Arr[], int iNo)
{
	int iCnt = 0;
	int iProduct = 1;
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		if((Arr[iCnt] % 2) != 0)
		{
			iProduct = iProduct * Arr[iCnt];
		}
	}
	if(iProduct == 1)
	{
		return 0;
	}
	else
	{
		return iProduct;
	}
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
		printf("Enter the Element %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = ProductofODD(ptr,iSize);
	printf("product of odd numbers is : %d",iRet);
	
	free(ptr);
	
	return 0;
}
