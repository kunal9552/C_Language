#include<stdio.h>


void DisplaySchedule(char Alphabet)
{
	if((Alphabet == 'A')||(Alphabet == 'a'))
	{
		printf("Your Exam at 7 AM");
	}
	if((Alphabet == 'B')||(Alphabet == 'b'))
	{
		printf("Your Exam at 8.30 AM");
	}
	if((Alphabet == 'C')||(Alphabet == 'c'))
	{
		printf("Your Exam at 9.20 AM");
	}
	if((Alphabet == 'D')||(Alphabet == 'd'))
	{
		printf("Your Exam at 10.30 AM");
	}
}

int main()
{
	char ch = '\0';
	
	printf("Enter Character : ");
	scanf("%c",&ch);
	
	DisplaySchedule(ch);
	
	return 0;
}