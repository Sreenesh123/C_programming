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
	for (i=0;i<len/2;i++)
	{
		if(str1[i]==str1[len-i-1]){
			c++;
		}
	}
	if(c==len/2){
		printf("The given string is a palindrome");
	}
	else{
		printf("The given string is not a palindrome");
	}
	return 0;
}
