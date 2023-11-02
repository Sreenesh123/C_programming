#include<stdio.h>
int main(){
	int n;
	printf("enter the number of elements in the array : ");
	scanf("%d",&n);
	int a[n],i,j,t;
	printf("enter the elements of the array : \n");
	for (i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);}
	
	printf("the array is :");
	printf("[");
	for (i=0;i<n;i++){
		
		printf("%d ",a[i]);}
		printf("]");
	for (i=0;i<n;i+=2){
	t=a[i+1];
	a[i+1]=a[i];
	a[i]=t;}
	printf("\nthe required array is : ");
	printf("[");
	for (i=0;i<n;i++){
		printf("%d ",a[i]);}
		printf("]");
		return 0;}
