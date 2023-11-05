#include<stdio.h>
int main(){
	int i,j,k,n,x,t,N;
	printf("Enter the value of N : ");
	scanf("%d",&N);
	int a[N];
	printf("Enter the elements in the array : ");
	for (i=0;i<N;i++){
		printf("\na[%d] : ",i);
		scanf("%d",&a[i]);}
	printf("the first duplicate number is : ");
	for (i=0;i<N;i++){
		int c=0;
		for (j=0;j<N;j++){
			if (a[i]==a[j]&& i!=j){
				c++;}}
				
			if(i>0&&c==0)	{
			printf("%d ",a[i]);
					break;}
			}
			
	
	return 0;
		
	}
