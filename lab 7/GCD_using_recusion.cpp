#include<stdio.h>
int main(){
	int i;
	int n;
	int GCD (int x, int y)
	
		{int gcd=0;
		for (i=0;i<n;i++){
			for(j=0;j<n;j++){
			if((x%i)==0&&(y%j)==0&&i==j){
				gcd=i;
			}
			
		}}return gcd;
		
	}
	scanf("&d &d",&x,&y);
	GCD(x,y);
	printf("%d",gcd);
	return 0; 
	
}
