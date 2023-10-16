#include<stdio.h>
int main ()
{
	float k,m,c,mm;
	printf("Enter the kilometers : ");
	scanf("%f",&k);
	m=k*1000;
	c=m*100;
	mm=c*10;
	printf("meters= %f \n",m);
	printf("centimeter= %f \n",c);
	printf("millimeter= %f \n",mm);
	return 0 ;
	
	
}
