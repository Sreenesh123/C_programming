#include<stdio.h>
int main(){
	int n,i,t,c,k,j;
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
	printf("]/n");
	
	for (i=0;i<n;i++){
		c=0;
		for (j=0;j<n;j++){
			if (a[i]==a[j] ){
				c+=1;
			}
		
		}
		printf("\nFrequency of %d is %d",a[i],c);

		
	
	}return 0;}
