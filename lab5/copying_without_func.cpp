//copying without function
#include<stdio.h>
#include<string.h>
int main (){
	int i,k;
	char str1[10000];
	char str2[10000];
	printf("Enter the string 1 : ");
	scanf("%s",str1);
	for (i=0;str1[i]!='\0';i++);
	int len=i;
	for (i=0;i<len;i++)
	{
		str2[i]=str1[i];
	}
	printf(" The string 2 is %s",str2);
	
	return 0;
}
