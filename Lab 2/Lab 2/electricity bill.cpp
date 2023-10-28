#include<stdio.h>
int main()
{
	int u;
	printf("Enter the number of units: ");
	scanf("%d",&u);
	if (u>=0 && u<=100){
	printf("The bill is %d",u*2);}
	else if (u>=101 && u<=250){
	printf("The bill is %f",u*3.5);}
	else{
	printf("The bill is %d",u*5);}
	
	
}
