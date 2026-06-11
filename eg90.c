//space in string
void left_trim(char *p)
{
char *q;

if(*p=='\0')return;

q=p;
while(*q)++q;
--q;

while(*q==' '&&q>=p)
{
--q;
}
*(q+1)='\0';
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