// copy string 
#include<stdio.h>
void copy_string(char *p,char *q)
{
while(*q!='\0')
{
*p=*q;
++p;
++q;
}
*p='\0';
}

int main()
{
char a[21];
char b[21];

printf("Enter a string: ");
scanf("%s",a);
printf("Enter a string: ");
scanf("%s",b);

copy_string(a,b);

printf("%s\n",a);

return 0;
}