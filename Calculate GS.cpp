#include<stdio.h>
int main()
{
	float bs,HRA,DA,GS;
	printf("The basic sallery is:");
	scanf("%f",&bs);
	if(bs>0 && bs<=10000)
	{
		HRA=bs*0.2;
		DA=bs*0.8;
		GS=bs+HRA+DA;
	}
	if(bs>=10000 && bs<=20000)
	{
		HRA=bs*0.25;
		DA=bs*0.9;
		GS=bs+HRA+DA;
	}
	if(bs>=20000 && bs>20000)
	{
		HRA=bs*0.3;
		DA=bs*0.95;
		GS=bs+HRA+DA;
	}
	
	printf("The gross sallery is %f",GS);
	return 0;
}
	