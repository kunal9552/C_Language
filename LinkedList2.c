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

int SearchLastOcc(PNODE Head, int no)
{
	bool bret = false;
	int Count = 1;
	int Count2 = 1;
	while(Head != NULL)
	{
		if(Head->data == no)
		{
			Count2 = Count;
		}
		Count++;
		Head = Head->next;
	}
	return Count2;
}

void Display(PNODE Head)
{
	printf("Elements in LL are : \n");
	while(Head != NULL)
	{
		printf(" | %d | -> ",Head->data);
		Head = Head->next;
	}
	printf("\n");
}

int main()
{
	PNODE First = NULL;
	int iRet = 0;
	
	InsertFirst(&First,70);
	InsertFirst(&First,30);
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	
	Display(First);
	
	
	iRet = SearchLastOcc(First,30);
	printf("Last occurence is : %d",iRet);
	
	return 0;
}
