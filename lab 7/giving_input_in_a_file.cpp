#include<stdio.h>
#include<string.h>

int main()
{
char ch;{
FILE*fp;
fp=fopen("INPUT.txt","w");
scanf("%c",&ch);
putc(ch,fp);
fclose(fp);}
{FILE*fp;
fp=fopen("INPUT.txt","r");
char d=getc(fp);
printf("%c",d);
fclose(fp);}

return 0;
}
