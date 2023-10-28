#include<stdio.h>
int main()
{
	int a,b,t;
	printf("Enter the value of the two numbers : ");
	scanf("%d %d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("The value is a and b respectively are %d,%d",a,b);
	return 0;
	
}
