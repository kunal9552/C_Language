
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

void DisplayPallindrome(PNODE Head)
{
    int iDigit = 0, iRev = 0, iTemp = 0;

    BOOL bRet = 0;
    while(Head != NULL)
    {
        iTemp = Head-> Data;
        iDigit = 0, iRev = 0;

        while(iTemp > 0)
        {
            iDigit = iTemp % 10;
            iRev = (iRev*10) + iDigit;
            iTemp = iTemp / 10;
        }
        
        if(Head->Data == iRev) printf("%d ", Head->Data);
    
        Head = Head-> Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 414);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    DisplayPallindrome(First);

    return 0;
}