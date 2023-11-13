//most and least repeated elements
#include<stdio.h>
#include<string.h>
int main (){
	int i,j,t,c=0;
	char s;
	char str1[10000];
	printf("Enter the string : ");
	gets(str1);
	int len=strlen(str1);
	char most_rep = str1[0];
	char min_rep = str1[0];
	int max=0;
	int min=10000;
	for (i=0;i<len;i++)
	{
		c=0;
		for(j=0;j<len;j++){
		if(str1[i]==str1[j])
		{
			c++;
		}
		}
		
		if(c>max){
			max=c;
			most_rep=str1[i];
		}
		if(c<min){
			min=c;
			min_rep=str1[i];
			
		}
		
		
		}
	printf("The most repeated character  is %c\n",most_rep);
	printf("The minimum repeated character  is %c",min_rep);
	
	return 0;
}
