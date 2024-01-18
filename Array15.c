#include<stdio.h>
#include<stdlib.h>

int Large(int Arr[], int iNo)
{
	int iCnt = 0;
	int iMax = Arr[0];
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		if(Arr[iCnt] > iMax)
		{
			iMax = Arr[iCnt];
		}
	}
	return iMax;
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;
	
	printf("Ente the Number of Elements : ");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	printf("Enter %d Elements : \n",iSize);
	
	for(iCnt = 0; iCnt < iSize ; iCnt++)
	{
		printf("Enter the Element %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Large(ptr,iSize);
	printf("Largest number is : %d",iRet);
	
	free(ptr);
	
	return 0;
}