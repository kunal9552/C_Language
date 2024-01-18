#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
	}
		
}

void Display(PNODE Head)
{
	printf("Elements in LL Are : \n");
	while(Head != NULL)
	{
		printf(" | %d | -> ",Head->data);
		Head = Head->next;
	}
	printf("\n");
}

int Addition(PNODE Head)
{
	int iSum = 0;
	while(Head != NULL)
	{
		iSum = iSum + Head->data;
		Head = Head->next;
	}
	return iSum;
}

int main()
{
	PNODE First = NULL;
	int iRet = 0;
	
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	
	Display(First);
	iRet = Addition(First);
	printf("Addition is : %d",iRet);
	
	return 0;
}