#include <stdio.h>
int main()
{
	int i,j,n,p,q,s;
	printf("enter the number of rows: ");
	scanf("%d",&n);
	int a[n][n];
	int k=1;
	for (i=0;i<(n+1)/2;i++){
		for (j=i;j<n-i;j++){
			a[i][j]=k;
			k++;
		}

		for (s=i+1;s<n-i;s++){
			a[s][n-1-i]=k;
			k++;
		}
		for (p=n-i-2;p>i;p--){
			a[n-i-1][p]=k;
			k++;
		}
		for (q=n-i-1;q>=i+1;q--){
			a[q][i]=k;
			k++;
		}
	}
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("%-5d",a[i][j]);
		}printf("\n");
	}return 0;}

