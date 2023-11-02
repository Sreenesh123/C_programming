#include<stdio.h>
int main(){
	int n,i,t,c,k,j,sum;
	printf("Enter the number of elements in the array  : ");
	scanf("%d",&n);
	printf("Enter the sum : ");
	scanf("%d",&sum);
	int a[n];
	for (i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("The array is : ");
	printf("[");
	for (i=0;i<n;i++){
		printf("%d ",a[i]);}
	printf("]\n");
	
	for (i=0;i<n;i++){
		
		for (j=i+1;j<n;j++){
			if (a[i]+a[j]==sum){
				printf("%d %d\n",a[i],a[j]);
				break;
			}
		
		}
		
			
	}return 0;}
