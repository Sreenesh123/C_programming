#include<stdio.h>
#include<string.h>

int main()
{FILE*fp;
char buffer[1000];
char ch[1000];{

fp=fopen("INPUT3.txt","w");
scanf("%s",ch);
fwrite(ch,1,strlen(ch),fp);
}
FILE*fp2;
{

fp2=fopen("INPUT4.txt","r");}

while(char c=getc(fp)!=EOF){
	putc(c,fp2);
	c=getc(fp);
	
}
printf("&s",fp);



return 0;
}
