//length of a string without function
#include<stdio.h>
#include<string.h>
int main (){
	int i,k;
	char str1[10000];
	printf("Enter the string 1 : ");
	scanf("%s",str1);
	for (i=0;str1[i]!='\0';i++);
	int len=i;
	printf("The length of the string is %d",len);
	
	return 0;
}
