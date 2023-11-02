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
	for (i=0;i<n-1;i++){
		for (j=0;j<n-i-1;j++){
			if (a[j+1]>a[j]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;}}}
		printf("\nthe sorted array is :");
		printf("[");
		for (i=0;i<n;i++){
		
		printf("%d ",a[i]);}
		printf("]");}
				
			
		
	
