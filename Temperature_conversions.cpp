/* C Program To Convert Temperature */
#include<stdio.h>
#include<conio.h>
 int main()

{
		
	float fh,cl,kl;
	int ch;	
	printf("\n");
	printf(" TEMPERATURE CONVERTER");
	printf("\n");
	printf("\n 1.Fahrenheit to Celsius.");
	printf("\n 2.Celsius to Fahrenheit.");
	printf("\n 3.Celcius to Kelvin.");
	printf("\n 4.Kelvin to Celsius.");
	printf("\n 5.Fahrenheit to Kelvin.");
	printf("\n Enter your choice: ");
	scanf("%d",&ch);
	
	if(ch==1)
	{
		printf("\n Enter temp in Fahrenheit: ");
		scanf("%f",&fh);
		cl=(fh-32)/1.8;
		printf(" Temp in Celsius: %.3f C:",cl);	
	}
	if(ch==2)
	{
		printf("\n Enter temp in Celsius:  ");
		scanf("%f",&cl);
		fh=(cl*1.8)+32;
		printf(" Temp in Fahrenheit: %.3f F:",fh);
	}
	if (ch==3)
	{
		printf("\n Enter temp in Celsius:  ");
		scanf("%f",&cl);
		kl=cl+273;
		printf(" Temp in Kelvin: %.3f:",kl);
	}
	if (ch==4)
	{
		printf("\n Enter temp in Kelvin: ");
		scanf("%f",&kl);
		cl=kl-273;
		printf(" Temp in Celsius: %.3f:",cl);
		
	}
	if (ch==5)
	{
		printf("\n Enter temp in Fahrenheit: ");
		scanf("%f",&fh);
		kl= 0.555*(fh-32)+273;
		printf(" Temp in Kelvin: %.3f:",kl);
	}
	
	
	return 0;
	getch();
}
