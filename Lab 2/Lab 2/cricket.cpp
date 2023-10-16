#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("Enter any three numbers : ");
	scanf("%f %f %f",&a,&b,&c);
	if(a==b & b==c & c==a ){
		printf("a");
	}
	else if(a>b){
		if (a>c){
			printf("%f",a);}
		else{
			printf("%f",b);
		}}
	else{
		printf("%f",c);
	}
	return 0;
	
}
