#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo, UINT pos1, UINT pos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;

    UINT iResult1 = 0;
    UINT iResult2 = 0;
    UINT Count = 0;
  
  
    iMask1 = iMask1<<(pos1-1);
    iMask2 = iMask2<<(pos2-1);

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    if((iResult1 == iMask1) || (iResult2 == iMask2))
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
    UINT Pos1 = 0;
    UINT Pos2 = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    printf("Enter First Posion : ");
    scanf("%d",&Pos1);

    printf("Enter Two Posion : ");
    scanf("%d",&Pos2);

    bRet = CheckBit(iValue,Pos1,Pos2);
    if(bRet == TRUE)
    {
        printf("Bitd are ON");
    }
    else
    {
        printf("Bits are OFF");
    }

    return 0;
}