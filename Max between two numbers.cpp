#include <stdio.h>
int main ()
{
	int a,b,max;
	printf("enter any two Number:");
	scanf("%d%d",&a,&b);
	
	if(a<b)
	{
			max=b;
	}
	if(a>b)
	 {
	 	max=a;
	 }
	 printf("The maximum number is %d",max);
	 return 0;
}