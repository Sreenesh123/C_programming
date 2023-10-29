#include<stdio.h>
int main(){
int n,i,j;
int a[2][2],b[2][2];
int c[2][2]={};

for(i=0;i<2;i++){
	printf("Enter the value  %d row of the matrix A : \n", i);
	for (j=0;j<2;j++){
	scanf("%d",&n);
	a[i][j]=n;
	c[i][j]=a[i][j];} 
}
for(i=0;i<2;i++){
	printf("Enter the value of %d row the matrix B : \n", i );
	for (j=0;j<2;j++){
	scanf("%d",&n);
	b[i][j]=n;
	c[i][j]+=b[i][j];}
}
printf("The required matrix is : \n");
for (i=0;i<2;i++){
	for (j=0;j<2;j++){
		printf("%d ",c[i][j]);
	}
printf("\n");}


}



