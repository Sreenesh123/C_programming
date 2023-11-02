#include<stdio.h>
int main(){
	int n,i,t,c,k,j,N;
	printf("Enter the value of N : ");
	scanf("%d",&N);
	int a[N-1];
	for (i=0;i<N-1;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("The array is : ");
	printf("[");
	for (i=0;i<N-1;i++){
		printf("%d ",a[i]);}
	printf("]");
	for (i=1;i<=N;i++){
		c=0;
		for (j=0;j<N-1;j++){
			if (a[j]==i)
			{c=1;
			}}
		if (c==0){
			printf("\nThe missing number is %d ",i);
		}
		
			
		}

	return 0;
}
