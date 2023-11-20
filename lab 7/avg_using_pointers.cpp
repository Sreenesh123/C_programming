#include<stdio.h>
int main(){
	int i;
	union student{
		char name[10];
		int roll_no;
		int marks[5];
	}s1;
	printf("Enter the name and roll number : ");
	scanf("%s" "%d",s1.name,&s1.roll_no);
	printf("Enter the marks: \n");
	int sum=0;
	for  (i=0;i<5;i++){
		scanf("%d",&s1.marks[i]);
		 sum+=s1.marks[i];
		
	}
	int avg=sum/5;
	printf("The average is : %d",avg);
	return 0;
	
	
}
