#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character:");
	scanf("%c",&ch);
	if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	{
		printf("The given character %c is Alphabet",ch);
	}
	else
	printf("The given character %c is not Alphabet",ch);
	return 0;
}