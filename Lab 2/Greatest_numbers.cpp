#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("Enter any three numbers : ");
	scanf("%f %f %f",&a,&b,&c);
	if(a>b){
		if (a>c){
			printf("The greatest number is %f",a);}
		else{
			printf("the greatest number is %f",c);
		}}
	else{
		printf("The  greatest number is %f",b);
	}
	return 0;
	
}
