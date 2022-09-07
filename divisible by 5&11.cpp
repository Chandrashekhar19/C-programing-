#include <stdio.h>
int main ()
{
	int a;
	printf("Enter any Value:");
	scanf("%d",&a);
	if(a%5==0)
	{
		printf("\nThe value is Divisible by 5");
	}
	else
	printf("\nThe value is not divisible by 5");
	if(a%11==0)
	{
		printf("\nThe value is Divisible by 11");
	}
	else 
	printf("\nThe value is not Divisible by 11");
	 return 0;
}