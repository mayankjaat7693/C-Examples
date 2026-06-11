// convert Lowercase
void in_lowercase(char *p)
{
if(!(*p))return;

for(;*p;++p)
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

in_lowercase(a);

printf("%s",a);
return 0;
}