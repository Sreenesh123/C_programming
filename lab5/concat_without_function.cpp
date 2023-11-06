//concat without function
#include<stdio.h>
#include<string.h>
int main (){
	int i,k,j,c=0;
	char str1[10000];
	char str2[10000];
	printf("Enter the string 1 : ");
	scanf("%s",str1);
	printf("Enter the string 2 : ");
	scanf("%s",str2);
	for (i=0;str1[i]!='\0';i++);
	int len1=i;
	for (j=0;str2[j]!='\0';j++);
	int len2=j;
	
	for (i=len1;i<=len1+len2;i++){
	
	{
		str1[i]=str2[c];
		c++;

	}}
	printf("The combined string is : ");
	for (i=0;i<=len1+len2;i++){
	printf("%c",str1[i]);}
	

	return 0;
}
