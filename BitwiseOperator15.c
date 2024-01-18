#include<stdio.h>

typedef unsigned int UINT;

int OffBit(UINT iNo, int iPos)
{
    int iMask = 0X00000001;
    int iResult = 0;

    iMask = iMask<<(iPos-1);
    iResult = iNo & iMask;

    return (iNo ^ iMask);
}

int main()
{
    UINT iValue = 0;
    int Pos = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    printf("Enter the Position : ");
    scanf("%d",&Pos);

    iRet = OffBit(iValue,Pos);

    printf("Modified Number is : %d",iRet);

    return 0;
}