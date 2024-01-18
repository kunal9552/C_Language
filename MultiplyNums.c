#include<stdio.h>

int Multiply(int num1, int num2, int num3)
{
	int Ans = 0;
	int result = 1;
	 if (num1 != 0) {
        result *= num1;
    }
    if (num2 != 0) {
        result *= num2;
    }
    if (num3 != 0) {
        result *= num3;
    }
    
    return result;
}



int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iValue3 = 0;
	
	int iRet = 0;
	
	printf("Please Enter Three Numbers : ");
	scanf("%d \n%d \n%d",&iValue1,&iValue2,&iValue3);
	
	iRet = Multiply(iValue1,iValue2,iValue3);
	
	printf("%d",iRet);
	
	return 0;
}