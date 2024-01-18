#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    UINT iMask = 0X08104040;
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
        printf("7th,15th,21st and 28th Bits are ON");
    }
    else
    {
        printf("7th,15th,21st and 28th Bits are OFF");
    }
}