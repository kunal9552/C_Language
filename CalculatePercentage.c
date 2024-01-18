#include<stdio.h>

float ClaPercentage(float iNo1 , float iNo2)
{
	float Ans = 0.0f;
	if((iNo1 < 0) || (iNo2 < 0 ))
	{
		printf("Invalid Input");
		return Ans;
	}
	if(iNo2 > iNo1)
	{
		printf("Invalid Input\n");
		return Ans;
	}
	
	Ans = ((iNo2/iNo1)*100);
	return Ans;
}

int main()
{
	int iTotal = 0;
	int iMarks = 0;
	float fRet = 0.0;
	
	printf("Enter the Total marks : \n");
	scanf("%d",&iTotal);
	
	printf("Enter obtaied Marks : \n");
	scanf("%d",&iMarks);
	
	
	fRet = ClaPercentage(iTotal , iMarks);
	printf("Percentage obtained : %f %",fRet);
	
	
	
	return 0;
}