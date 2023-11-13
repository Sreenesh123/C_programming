//first occurence
#include<stdio.h>
#include<string.h>
int main (){
	int i,k,j,num,t,c=0,ch;
	char s;
	char str1[10000];
	printf("Enter the string : ");
	gets(str1);
	printf("Enter the character : ");
	scanf("%c",&ch);
	int len=strlen(str1);
	for (i=0;i<len;i++)
	{
			if (str1[i]==ch){
				printf("The character is first occured at the position %d",i+1);
				c=1;
				break;
			}
	}
	if(c==0){
		printf("The character is not present");
	}

	return 0;
}
