#include<stdio.h>
int main()
{
	int a;
	printf("Enter the day number : ");
	scanf("%d",&a);
	if (a==1){
		printf("The day is monday");
	}
	else if (a==2){
		printf("The day is tuesday");
	}
	else if (a==3){
		printf("The day is wednesday");
	}
	else if (a==4){
		printf("The day is thursday");
	}
	else if (a==5){
		printf("The day is friday");
	}
	else if (a==6){
		printf("The day is saturday");
	}
	else if (a==7){
		printf("The day is sunday");
	}
	return 0;
}
