#include<stdio.h>
int main(){
int i,j,n;
printf("Enter the number of integers: ");
scanf("%d",&n);
int a[n];
printf("Enter the numbers of the array: ");
for(i=0;i<n;i++){
scanf("%d",&a[i]);}
int min = a[0];
int max= a[0];
for (i=1;i<n;i++){
	if (a[i]<min){
		min=a[i];
	}

}

for (j=1;j<n;j++){
	if (a[j]>max){
		max=a[j];}}
printf("min is %d",min);
printf("\n");
printf("max is %d",max);

}
