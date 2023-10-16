#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter any three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b & b==c & c==a){
		printf("The Given three numbers are equal");}
	else{
		printf("The Given three numbers are not equal");
	}
	return 0;
}
