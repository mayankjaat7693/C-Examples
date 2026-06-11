//linear sort (decreasing order)
#include<stdio.h>
int main()
{
int x[10];
int e,f,g;
int i;

for(i=0;i<=9;++i)
{
printf("Enter a number: ");
scanf("%d",&x[i]);
}

for(e=0;e<=8;++e)
{
for(f=e+1;f<=9;++f)
{
if(x[e]<x[f])
{
g=x[e];
x[e]=x[f];
x[f]=g;
}
}
}
for(i=0;i<=9;++i)
{
printf("%d\n",x[i]);
}
return 0;
}