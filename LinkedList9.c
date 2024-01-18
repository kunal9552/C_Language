
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

int SecMaximum(PNODE Head)
{
    int iMax = 0, iSecMax = 0;

    while(Head != NULL)
    {
        if((Head-> Data>iMax))
        {
            iSecMax = iMax;
            iMax = Head-> Data;
        }
        else if((Head->Data>iSecMax) && (Head->Data!=iMax))
        {
            iSecMax = Head-> Data;
        }
        printf("iMax: %d  iSecMax: %d \n",iMax, iSecMax);

        Head = Head-> Next;
    }

    return iSecMax;
}

int main()
{
    int iRet = 0;

    PNODE First = NULL;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    iRet = SecMaximum(First);
    printf("Second maximum number is : %d", iRet);

    return 0;
}