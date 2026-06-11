// convert to int 
#include<stdio.h>
int to_int(char *p)
{
int acc=0;

while(*p!='\0')
{
acc=(acc*10)+(*p-48);
++p;
}

return acc;
}

int main()
{
char a[21];
int x;

printf("Enter a string: ");
scanf("%[^\n]s",a);

x=to_int(a);

printf("%d\n",x);
return 0;
}