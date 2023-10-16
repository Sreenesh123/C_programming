#include<stdio.h>
int main(){
	int i,j,n,l;
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		for (j=0;j<=i;j++)
		{
			printf("*");
			
		}printf("\n");
	}
	for (i=0;i<n;i++){
		for (j=0;j<n-i;j++)
		{
			printf("*");
			
		}printf("\n");
	}return 0;
return 0;
}
