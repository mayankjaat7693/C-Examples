// convert Captalize
void in_captalize(char *p)
{
if(!(*p))return;
if(*p>=97 && *p<=122)*p= *p-32;
for(++p;*p;++p)
{
if(*p>=65 && *p<=90)*p=*p+32;
}
}
 
#include<stdio.h>
int main()
{
char a[21];

printf("Enter string: ");
scanf("%s",a);

in_captalize(a);

printf("%s",a);
return 0;
}