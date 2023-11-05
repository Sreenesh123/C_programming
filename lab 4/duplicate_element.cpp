#include <stdio.h>
int main()
{
	int n,i,j,t;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements :  ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("Multiple elements are ");
	for(i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		{
			printf("%d ",a[i]);
			while(a[i]==a[i+1])
			{
				i++;
			}
		}
	}
}
