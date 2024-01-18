
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn-> Next = NULL;
    newn-> Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn-> Next = *Head;
        *Head = newn;
    }
}

BOOL CheckPrime(int iValue)
{
    int iSum = 0, iCnt = 0;
    BOOL iCheck = TRUE;

    for(iCnt = 2; iCnt <= (iValue/2); iCnt++)
    {
        if((iValue%iCnt) == 0)
        {
            iCheck = FALSE;
            break;
        }
    }

    return iCheck;
}

int DisplayPrime(PNODE Head)
{
    BOOL bRet = 0;
    while(Head != NULL)
    {
        bRet = CheckPrime(Head-> Data);

        if(bRet == TRUE) printf(" %d ",Head-> Data);

        Head = Head-> Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    DisplayPrime(First);

    return 0;
}