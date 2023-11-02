#include<stdio.h>
int main(){
	int n,i,k,j,t;
	printf("Enter the number of elements in the array  : ");
	scanf("%d",&n);
	printf("Enter the value of k  : ");
	scanf("%d",&k);
	if(k>n){
		printf("invalid value of k ");
	}
	else {
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
	for (i=0;i<n-1;i++){
		for (j=0;j<n-i-1;j++){
			if (a[j+1]>a[j]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	
	}
	printf("\nThe required array is : [");
	for (i=0;i<n;i++){
		printf("%d ",a[i]);}
	printf("]");
	printf("\nThe %d largest value is %d",k,a[k-1]);
	printf("\nThe %d samllest value is %d",k,a[n-k]);}
	return 0;}
