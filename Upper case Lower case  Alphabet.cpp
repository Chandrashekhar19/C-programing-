#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character:");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90 )

		printf("\nThe Character %c upper case Alphabet",ch);
		
		else if(ch>=97 && ch<=122)
		
		printf("\nThe character %c is Lower case Alphabet",ch);
	
	return 0;
}