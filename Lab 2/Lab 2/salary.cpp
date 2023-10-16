#include<stdio.h>
int main()
{
	int b,c;
	float d,t,h,g;
	
	printf("Enter your basic salary: ");
	scanf("%d",&b);
	printf("Enter which tier city you belong to :");
	scanf("%d",&c);
	d=(44*b)/100;
	t=(8*b)/100;
	if (c==1){
		h=(24*b)/100;
	}
	else if (c==2){
		h=(16*b)/100;
	}
	else (c==3);{
		h=(12*b)/100;
	}
	g=b+c+d+t+h;
	printf("The gross salary is : %f",g);
	return 0;
}
	

