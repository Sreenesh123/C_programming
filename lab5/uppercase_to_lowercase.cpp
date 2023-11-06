//uppercase to lower case without in build function
#include<stdio.h>
#include<string.h>
int main (){
	int i,k,num;
	char s;
	char str1[10000];
	char str2[10000];
	printf("Enter the string 1 in uppercase : ");
	scanf("%s",str1);
	for (i=0;str1[i]!='\0';i++);
	int len=i;
	for (i=0;i<len;i++)
	{
		num =(int(str1[i])) + 32 ;
		str2[i] = char(num);
	}
printf("The string in lowercase : ");
for (i=0;i<len;i++){
	printf("%c",str2[i]);
}
	return 0;
}
