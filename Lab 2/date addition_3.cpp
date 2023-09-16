#include<stdio.h>
int main()
{
	while (true){
	char(invalid)=false;
	int d,m,y,t;
	printf("enter the date :");
	scanf("%d.%d.%d",&d,&m,&y);
	if (m ==1||m==3||m==5||m==7||m==8||m==10||m==12){
		if (d>0&&d<31){
		d++;
		t=m;}
		else if (d==31){
			d=1;
			t=m+1;	
		}
		else{
			invalid=true;
		}
	}
	else if (m ==4||m==6||m==9||m==11){
		if (d>0&&d<30){
			d++;
			t=m;}
		else if (d==30){
			d=1;
			t=m+1;}
		else{
			invalid=true;
		}}	
		
	if (m==2){
		if (y%4==0&&(y%100!=0||y%400==0)){
			int k=29;
			if (d>0&&d<29){
			d++;
			t=m;}
			else if (d==29){
			d=1;
			t=m+1;	}
			else{
				invalid=true;
				
			}
			
		}
		else{
			int l=28;
			if (d>0&&d<28){
			d++;
			t=m;}
			else if (d==28){
			d=1;
			t=m+1;}
			else{
				invalid=true;}	
		}
	}
	if (d==0||m==0||y==0){
		invalid=true;
	}
	if (m==12&&d==1){
		t=1;
		d=1;
		++y;
		
	}
		
	if (invalid==true){
		printf("invalid \n");}
	else{
	printf("%d.%d.%d \n",d,t,y);}
	}
	
}
