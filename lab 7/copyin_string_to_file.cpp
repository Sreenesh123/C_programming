#include<stdio.h>
#include<string.h>

int main()
{
char ch[1000];{
FILE*fp;
fp=fopen("INPUT2.txt","w");
scanf("%s",ch);
fwrite(ch,1,8,fp);
fclose(fp);}
//{
//FILE*fp;
//fp=fopen("INPUT.txt","r");
//printf("%s",fread());
//fclose(fp);}

return 0;
}
