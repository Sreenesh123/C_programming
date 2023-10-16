#include<stdio.h>
int main(){
int n,i,j,k;
int a[2][2],b[2][2];
int c[2][2]={};

for(i=0;i<2;i++){
	printf("Enter the value  %d row of the matrix A : \n", i);
	for (j=0;j<2;j++){
	scanf("%d",&n);
	a[i][j]=n;
	} 
}
for(i=0;i<2;i++){
	printf("Enter the value of &d row the matrix B : \n", i );
	for (j=0;j<2;j++){
	scanf("%d",&n);
	b[i][j]=n;
}
}

for (i=0;i<2;i++){
	for (j=0;j<2;j++){
		for (k=0;k<2;k++){
			c[i][j]+=a[i][k]*b[k][j];
		
	}}}
	
for (i=0;i<2;i++){
	for (j=0;j<2;j++){
		printf("%d ",c[i][j]);
	}
printf("\n");}


}



