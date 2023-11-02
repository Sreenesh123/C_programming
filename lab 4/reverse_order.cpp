#include<stdio.h>
int main(){
	int n,i,t;
	printf("Enter the number of elements in the array  : ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("The array is : ");
	printf("[");
	for (i=0;i<n;i++){
		printf("%d ",a[i]);}
	printf("]");
	for (i=0;i<(n/2);i++){
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	printf("\nThe required array is : [");
	for (i=0;i<n;i++){
		printf("%d ",a[i]);}
	printf("]");
	return 0;
	

}
