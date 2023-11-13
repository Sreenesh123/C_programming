//capitalizing starting letter of each word in a string 
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
		if(int (str1[0])>90||int (str1[0])<65){
			str1[0]=char (num(str1[0])-32);
		}
		if(str1[i]=' ')
	}
	
	return 0;
}
