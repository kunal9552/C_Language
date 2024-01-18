#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0X00000040;
    UINT iResult = 0;

    return (iNo ^ iMask);
    
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("Modefied number is : %d",iRet);

    return 0;
}