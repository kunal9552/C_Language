#include<stdio.h>

typedef unsigned int UINT;

void Display(UINT iNo1,UINT iNo2)
{
    int iMask1 = 0X00000001;
    int iMask2 = 0X00000001;
    int iResult1 = 0;
    int iResult2 = 0;
    int iAns = 0;
    int Count = 0;

    for(int i = 0; i < 32; i++)
    {
        iMask1 = iMask1<<1;
        iMask2 = iMask2<<1;
        iResult1 = iNo1 & iMask1;
        iResult2 = iNo2 & iMask2;
        if((iResult1 == iMask1) && (iResult2 == iMask2))
        {
            printf("%d ",i);
        }
    }

}

int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;

    int Pos = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue1);

    printf("Enter the Number : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}