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

int Minimum(PNODE Head)
{
	int iMin = Head->data;
	
	while(Head != NULL)
	{
		if((Head->data) < iMin)
		{
			iMin = Head->data;
		}
		Head = Head->next;
	}
	return iMin;
	
}

int main()
{
	PNODE First = NULL;
	int iRet = 0;
	
	InsertFirst(&First,110);
	InsertFirst(&First,230);
	InsertFirst(&First,320);
	InsertFirst(&First,240);
	
	Display(First);
	iRet = Minimum(First);
	printf("Minimum is : %d",iRet);
	
	return 0;
}