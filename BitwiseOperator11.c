#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo,int iPos)
{
    UINT iMask = 0X00000001;
    UINT  iResult = 0;

    iMask = iMask<<(iPos-1);

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
    UINT iValue = 0;
    BOOL bRet = FALSE;
    int Pos = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    printf("Enter the Position : ");
    scanf("%d",&Pos);

    bRet = ChkBit(iValue,Pos);
    if(bRet == TRUE)
    {
        printf("Bit is ON");
    }
    else
    {
        printf("Bit is OFF");
    }


    return 0;
}