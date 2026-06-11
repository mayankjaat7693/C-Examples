// Reverse String
#include<stdio.h>
void reverse_string(char *p)
{
char *q;
char g;

if(*p=='\0')return;
q=p;
while(*q!='\0')++q;
--q;

while(p<q)
{
g=*p;
*p=*q;
*q=g;
++p;
--q;
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