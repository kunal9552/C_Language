#include<stdio.h>
#include<stdlib.h>

void DisplayNum(int Arr[],int iNo)
{
	int iCnt = 0;
	
	printf("Numbers Divisible of 11 are : ");
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		if((Arr[iCnt] % 11) == 0)
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
}

int main()
{
	int iSize = 0;
	int *ptr = 0;
	int iCnt = 0;
	
	printf("Enter the number of elements : ");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	printf("Enter %d Elements : \n",iSize);
	
	for(iCnt = 0; iCnt < iSize ; iCnt++)
	{
		printf("Enter Element %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	DisplayNum(ptr,iSize);
	
	free(ptr);
	
	return 0;
}