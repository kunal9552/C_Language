#include<stdio.h>


void DisplaySchedule(char CH)
{
	if((CH >= 'A') && (CH <= 'Z') || (CH >= 'a') && (CH <= 'z'))
	{
		printf("Decimal     : %d\n",CH);
		printf("Octal       : %o\n",CH);
		printf("Hexadecimal : %x\n",CH);
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