#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    UINT iMask = 0X80000001;
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
        printf("first and last  Bits are ON");
    }
    else
    {
        printf("first and last Bits are OFF");
    }
}