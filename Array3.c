#include<stdio.h>
#include<stdlib.h>

void DisplayNum(int Arr[],int iNo)
{
	int iCnt = 0;
	
	printf("Elements Divisible by 5 and that are even : ");
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		if((Arr[iCnt] % 5) == 0 && (Arr[iCnt] % 2) == 0)
		{
			printf("%d\t\n",Arr[iCnt]);
		}
	}

}

int main()
{
	int iSize  = 0;
	int *ptr = NULL;
	int iCnt = 0;
	
	printf("Enter the number of Elements : ");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	printf("Enter %d Elements : \n",iSize);
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter Element %d : ",iCnt +1);
		scanf("%d",&ptr[iCnt]);
	}
	
	DisplayNum(ptr,iSize);
	
	free(ptr);
	
	printf("Memory gets Deallocated Succesfully...");
	
	return 0;
}