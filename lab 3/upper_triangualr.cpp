#include<stdio.h>
int main(){
int n,i,j,k,m;
printf("enter the dimension of the square matrix : ");
scanf("%d",&m);
int a[m][m];

for(i=0;i<m;i++){
	printf("Enter the value  %d row of the matrix A : \n", i);
	for (j=0;j<m;j++){
	scanf("%d",&n);
	a[i][j]=n;
	} 

}
for (i=0;i<m;i++){
	for (j=0;j<m;j++){
		if (j<i){
		a[i][j]=0;}
		printf("%d ",a[i][j]);
	}
printf("\n");}
}
