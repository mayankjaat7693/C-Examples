//space in string
void left_trim(char *p)
{
char *q;

if(*p=='\0'|| *p!=' ')return;

q=p;
while(*q==' ')++q;

while(*q)
{
*p=*q;
p++;
++q;
}
*p='\0';
}

#include<stdio.h>
int main()
{
char a[21];

printf("Enter a string: ");
scanf("%[^\n]s",a);

left_trim(a);

printf("(%s)",a);
return 0;
}