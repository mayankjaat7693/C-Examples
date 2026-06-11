// Reverse String
#include<stdio.h>
void reverse_string(char *p)
{
char *q;
char g;

if(*p=='\0')return;

for(q=p;*(q+1);++q);
for(;p<q;++p,--q)
{
g=*p;
*p=*q;
*q=g;
}
}
int main()
{
char a[21];

printf("Enter a string: ");
scanf("%s",a);

reverse_string(a);

printf("%s",a);
return 0;
}