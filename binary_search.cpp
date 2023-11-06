#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,n,t,key;
	
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the key value : ");
	scanf("%d",&key);
		int low=0;
	int high = n-1;
	int mid =(low + high)/2;
	for (i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		
	}
	printf("The array is : [ ");
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
	
	}
	printf("]");
	for (i=0;i<n-1;i++){
		for (j=0;j<n-i-1;j++){
			if (a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("\nThe array is : [ ");
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
	
	}
	printf("]");
	for (i=0;i<log(n);i++){
		if (a[mid]==key){
			while(a[mid]==a[mid-1]){
				mid=mid-1;}
			printf("The required index is : %d",mid);
			break;
		}
		else if (a[mid]>key){
			high=mid-1;
		}
		else {
			low=mid+1;
		}
		mid=(high+low)/2;
	}
	return 0;
	
	
	
}
