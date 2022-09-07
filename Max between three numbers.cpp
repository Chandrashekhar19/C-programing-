#include <stdio.h>
int main ()
{
	int a,b,c,max;
	printf("enter any three Number:");
	scanf("%d%d%d",&a,&b,&c);
	max=a;
	if(max<b)
	{
		max=b;
	}
		if(max<c)
	{
		max=c;
	}
	 printf("The maximum number is %d",max);
	 return 0;
}