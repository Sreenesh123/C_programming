#include<stdio.h>
#include<math.h>
int main(){
	long n,i,j,k,l,p,m;
	printf("Enter the binary number : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		p=n/(pow(10,i));
		if(p==0)
		{l=i;
		break;}}
	int a[l];
	for (i=0;i<l;i++){
		k=n%10;
		n=n/10;
		a[i]=k;
	}
	int sum=0;
	for(i=0;i<l;i++){
		sum+=a[i]*pow(2,i);
	}
	printf("%ld\n",sum);
	int c=0;
	if(sum>16){
	for (i=0;sum>16;i++){
		a[i]=sum%16;
		sum/=16;
		c++;
		if(sum<16){
			if(sum>=10&&sum<=15){
				printf("%c",55+sum);
			break;}
			else {
				printf("%d",sum);
				break;
			}
		}}for (i=0;i<c;i++){
			if (a[c-i-1]>=10&&a[c-i-1]<=15){
					printf("%c",55+a[c-i-1]);
			}else{
			printf("%ld",a[c-i-1]);}
		}}
		else if(sum<16){
			if(sum>=10&&sum<=15){
				printf("%c",55+sum);}
			else{printf("%ld",sum);}

}	return 0;
}
