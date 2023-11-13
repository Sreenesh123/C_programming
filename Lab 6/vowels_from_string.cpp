//checking given string is palindrome or not 
#include<stdio.h>
#include<string.h>
int main (){
	int i,k,num,t,c=0;
	char s;
	char str1[10000];
	printf("Enter the string : ");
	gets(str1);
	
	int len=strlen(str1);
	for (i=0;i<len;i++)
	{
		if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'){
			printf("%c",str1[i]);
		}
	}
	
	return 0;
}
