
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

void DisplayProduct(PNODE Head)
{
    int iDigit = 0, iProd = 0, iTemp = 0;

    BOOL bRet = 0;
    while(Head != NULL)
    {
        iTemp = Head-> Data;
        iDigit = 0, iProd = 1;

        while(iTemp > 0)
        {
            iDigit = iTemp % 10;
            if(iDigit!=0) iProd = iProd * iDigit;
            iTemp = iTemp / 10;
        }
        
        printf("%d ", iProd);
    
        Head = Head-> Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    DisplayProduct(First);

    return 0;
}