// convert Uppercase
void in_uppercase(char *p)
{
if(!(*p))return;

for(;*p;++p)
{
if(*p>=97 && *p<=122)*p=*p-32;
}
}
 
#include<stdio.h>
int main()
{
char a[21];

printf("Enter string: ");
scanf("%s",a);

in_uppercase(a);

printf("%s",a);
return 0;
}