// count words
#include<stdio.h>
int words_count(char *p)
{
int words=0;

while(*p==' ')++p;
if(*p=='\0')return words;

while(*p!='\0')
{
if(*p==' ')
{
words++;
while(*p==' ')++p;
}
else
{
++p;
}
}
--p;

if(*p==' ')--words;
words++;

return words;
}

int main()
{
char a[21];
int count;

printf("Enter a string: ");
scanf("%[^\n]s",a);

count=words_count(a);

printf("count of words : %d\n",count);

return 0;
}