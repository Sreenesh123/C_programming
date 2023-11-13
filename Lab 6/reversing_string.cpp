//reversing a string
#include<stdio.h>
#include<string.h>
int main (){
	int i,k,num,t;
	char s;
	char str1[10000];
	printf("Enter the string : ");
//	scanf("%s",str1);
	gets(str1);
	for (i=0;str1[i]!='\0';i++);
	int len=i;
	for (i=0;i<len/2;i++)
	{
		t=str1[len-i-1];
		str1[len-i-1]=str1[i];
		str1[i]=t;
	}
printf("The reversed string is  : ");
for (i=0;i<len;i++){
	printf("%c",str1[i]);
}
	return 0;
}
