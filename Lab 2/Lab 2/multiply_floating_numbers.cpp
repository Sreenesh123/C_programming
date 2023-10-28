#include<stdio.h>

int main()
{
	float a,b,c;
	printf("Enter the value of two numbers: ");
	scanf("%f %f",&a,&b);
	c=a*b;
	printf("The product in float form is  :  %f",c);
	printf("The product in int form is  :  %d",(int)c);
	return 0;
}
