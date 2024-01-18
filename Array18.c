#include<stdio.h>
#include<stdlib.h>

void Disp3DigitNo(int Arr[],int iNo)
{
	int iCnt = 0;
	int iDigit = 0;
	int iCountDigit = 0;
	int iOriginal = 0;
	
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		iOriginal = Arr[iCnt];
		while(Arr[iCnt] != 0)
		{
			iDigit = Arr[iCnt] % 10;
			iCountDigit = iCountDigit + 1;
			Arr[iCnt] = Arr[iCnt] / 10;
		
		}	
		
		if(iCountDigit == 3)
		{
			printf("%d ",iOriginal);
		}
		iCountDigit = 0;
	}
	
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iCnt = 0;
	
	printf("Enter the number of elements : ");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	printf("Enter %d Elements : \n",iSize);
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter element %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	Disp3DigitNo(ptr,iSize);
	
	free(ptr);
	
	return 0;
}