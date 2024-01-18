#include<stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[],int iNo)
{
	int iCnt = 0;
	int iAddEven = 0;
	int iAddOdd = 0;
	for(iCnt = 0;iCnt < iNo; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iAddEven = iAddEven + Arr[iCnt];
		}
		else
		{
			iAddOdd = iAddOdd + Arr[iCnt];
		}
	}
	return iAddEven - iAddOdd; 
	
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;
	
	printf("Enter the number of Elements : ");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	printf("Enter %d Element : \n",iSize);
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter the Element No %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Diffrence(ptr,iSize);
	printf("Diffrence is : %d\n",iRet);
	
	free(ptr);

	printf("Memory is deallocated Succesfully...");
	
	return 0;
}