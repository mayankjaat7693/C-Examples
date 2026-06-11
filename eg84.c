// Pollindrome string
#include<stdio.h>
int pollindrome_string(char *p)
{
char *q;

while(*p=='\0')return 0;
q=p;
for(q=p;*(q+1);++q);

for(;p<q && *p==*q;++p,--q);
return p>=q;
}

int main()
{
char a[21];

printf("Enter a string: ");
scanf("%s",a);

if(pollindrome_string(a))
{
printf("%s  is a pollindrome\n",a);
}
else
{
printf("%s strin is a not pollindrome\n",a);
}

return 0;
}