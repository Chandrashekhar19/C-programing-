#include<stdio.h>
int main()
{
	int u;
	float t,Total,SR;
	printf("Enter the Unit:");
	scanf("%d",&u);
	if(u>0  && u<=50)
	{
		t=0.50*u;
	}
	if (u>50  && u<=100)
	{
		t=0.75*u;
	}
	if (u>100 && u<=200)
	{
		t=1.20*u;
	}
    if (u>200 && u<=250)
	{
		t=1.50*u;
	} 
	 SR=t*0.2;
	 Total=SR+t;
	 printf("\t\tElectricity Bill");
	 printf("\n --------------------------------------------------");
	 printf("\nThe total units are:%d",u);
	 printf("\nThe electricity generated per unit is:%.2f",t);
	printf("\nThe surchcharge  is:%.2f",SR);
	printf("\nThe total electricity charge is :Rs. %.2f",Total);
	printf("\n----------------------------------------------------");
	
	
	return 0;
}