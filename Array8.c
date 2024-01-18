#include<stdio.h>
#include<stdlib.h>

int Frequency11(int Arr[], int iNo)
{
	int iCnt = 0;
	int iCount11 = 0;
	
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		if(Arr[iCnt] == 11)
		{
			iCount11++;
		}
	}
	return iCount11;
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
	
	printf("Enter %d Elements : \n",iSize);
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter Element %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Frequency11(ptr,iSize);
	
	printf("Frequency of 11 is : %d",iRet);
	
	free(ptr);
	
	return 0;
}