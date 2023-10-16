#include<stdio.h>
int main()
{
	int y,m;
	printf("Enter the year: ");
	scanf("%d",&y);
	printf("Enter the month: ");
	scanf("%d",&m);
	if (m==1||m==3||m==5||m==7||m==8||m==10||m==12){
		printf("The number of days is 31");
	}
	else if (m==4||m==6||m==9||m==11){
		printf("The number of days is 30");
	}
	else{
		if(y%4==0 && (y%100!=0||y%400==0))
	printf("The number of days is 29");
	else 
	{
		printf("The number of days is 28");}
	} 
	return 0;
}
