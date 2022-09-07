#include<stdio.h>
int main()
{
	int p1,p2,p3,p4,p5,t,perc;
	char grade;
	printf("Physics:");
	scanf("%d",&p1);
	printf("Chemistry:");
	scanf("%d",&p2);
	printf("Biology:");
	scanf("%d",&p3);
	printf("Mathematic:");
	scanf("%d",&p4);
	printf("Computer:");
	scanf("%d",&p5);
	
	t=p1+p2+p3+p4+p5;
	printf("\nThe total marks is:%d",t);
	perc=t/5.0;
	printf("\nThe total percentege is: %d",perc);
	if(perc>=90)
	{
		grade='A';
	}
	if(perc>=80 && perc<=90)
	{
		grade='B';
	}
	if(perc>=70 && perc<=80)
	{
		grade='C';
	}
	if(perc>=60 && perc<=70)
	{
		grade='D';
	}
	if(perc>=40 && perc<=60)
	{
		grade='E';
	}
	printf("\nThe grade is %c",grade);
	   return 0;
}