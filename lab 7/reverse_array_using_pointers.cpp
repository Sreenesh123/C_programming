#include<stdio.h>
#include<string.h>
int main(){
	char str[10000];
	int  i;
	
	printf("Enter the string\n");
	scanf("%s",str);
	int len=strlen(str);
	char str2[len+1];
	
	char *p=str;
	for (i=0;i<=len;i++){
		str2[i]=*(p+(len-i-1));
	}
	printf("%s",str2);
	return 0; 
	
}
