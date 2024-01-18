#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0X0000000f;
    UINT iResult = 0;
    UINT iAns = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return iNo;
    }
    else
    {
        return ((iNo ^ iMask)+iResult);
    }
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