//comparing two strings without function
#include<stdio.h>
#include<string.h>
int main (){
	int i,k,num,j,c=0;
	char s;
	char str1[10000];
	char str2[10000];
	printf("Enter the string 1  : ");
	gets(str1);
	printf("Enter the string 2  : ");
	gets(str2);
	int len1=strlen(str1);
	int len2=strlen(str2);
	if(len1==len2){
	for (i=0;i<len1;i++)
	{
		if(str1[i]==str2[i])
			{
				c++;
	 		}
	 		
	
	}
	
	if(c==len1)
		{
			printf("Equal");
		}
	else
		{
			printf("Unequal");
		}
	}
	
	else
		{
			printf("Unequal");
		}

	return 0;
}
