// compare string
#include<stdio.h>
int compare_string(char *p,char *q)
{
while(*p!='\0'&& *q!=0)
{
if(*p != *q)break;
p++;
q++;
}
if(*p==*q)return 0;
else if(*p < *q)
{
return -1;
}
else
{
return 1;
}
}

int main()
{
char a[21];
char b[21];
int x;
printf("Enter a string: ");
scanf("%s",a);
printf("Enter another string: ");
scanf("%s",b);

x=compare_string(a,b);
if(x==0)
{
printf("%s and %s are equal\n",a,b);
}
else if(x<0)
{
printf("%s is less than %s\n",a,b);
}
else
{
printf("%s is greater than %s\n",a,b);
}
return 0;
}