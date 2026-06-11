// count string length
#include<stdio.h>
int get_string_length(char *p)
{
int count;
count=0;
while(*p!='\0')
{
count++;
p++;
}

return count;
}  
int main()
{
char c[21];
int i;

printf("Enter a string: ");
scanf("%s",c);

i=get_string_length(c);

printf("string length : %d\n",i);

return 0;
}