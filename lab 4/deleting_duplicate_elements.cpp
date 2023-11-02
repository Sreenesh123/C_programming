#include<stdio.h>
int main(){
	int n,i,t,c,k,j;
	c=0;
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
	for (i=0;i<n;i++){
		for (j=i+1;j<n;j++){
			if (a[i]==a[j]){
				for (k=j;k<n;k++)
				a[k]=a[k+1];
				n--;
				j--;}
				
				
			}
		}

	printf("\nThe required array is : ");
	printf("[");
	for (i=0;i<n;i++){
		printf("%d ",a[i]);}
	printf("]");
	return 0;
}
