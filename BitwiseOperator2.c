#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    UINT iMask = 0X00020010;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iNo = 0;
    BOOL bRet = FALSE;

    printf("Enyter the Number : \n");
    scanf("%d",&iNo);

    bRet = CheckBit(iNo);

    if(bRet == TRUE)
    {
        printf("5th and 18th Bits are ON");
    }
    else
    {
        printf("Bits are OFF");
    }
}