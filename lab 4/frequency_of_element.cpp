#include<stdio.h>
int main(){
	int i,j,k,n,c,x,t;
	printf("Enter the even number of elements in the array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the value of k : ");
	scanf("%d",&k);
	printf("Enter the elements in the array : ");
	for (i=0;i<n;i++){
		printf("\na[%d] : ",i);
		scanf("%d",&a[i]);
		}
	c=0;
	for (i=0;i<n;i++){
		c=0;
		for (j=0;j<n;j++){
			if (a[i]==a[j]){
				c++;
			}}
			if(a[i]==k){
				printf("the number of times %d occurs is : %d",k,c);
			break;
			}
			else {
				if(i==n-1){
					printf("The number is not available");
				}
			}
			
		}
	


	return 0;
}
