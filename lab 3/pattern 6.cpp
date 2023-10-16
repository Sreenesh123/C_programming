#include<stdio.h>
int main(){
	int i,j,n,s,k;
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		for (s=0;s<i;s++)
		{
			printf(" ");
			}
		
		for (j=0;j<n-i;j++)
		{
			printf("*");
			
		}
		for (k=0;k<n-i-1;k++){
			printf("*");
		
		}
		printf("\n");}
		

	return 0;
}
