#include<stdio.h>
int main()
{
	int a,b,t;
	scanf("%d %d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("The value is a and b respectively are %d,%d",a,b);
	return 0;
	
}
