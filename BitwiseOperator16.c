#include<stdio.h>

typedef unsigned int UINT;

int OffBit(UINT iNo)
{
    int iMask = 0X00000001;
    int iResult = 0;
    int iAns = 0;
    int Count = 0;

    for(int i = 0; i < 32; i++)
    {
        iMask = iMask<<1;
        iResult = iNo & iMask;
        if(iResult == iMask)
        {
            Count++;
        }
    }

    if((iNo % 2) != 0)
    {
        return Count;  
    }
    else
    {
        return Count-1;
    }  

    
}

int main()
{
    UINT iValue = 0;
    int Pos = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("Count of ON bit : %d",iRet);

    return 0;
}