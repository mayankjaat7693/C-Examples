//bubble sort (decreasing order)
#include<stdio.h>
int main()
{
int x[10];
int e,f,g;
int i,k;

for(i=0;i<=9;++i)
{
printf("Enter a number: ");
scanf("%d",&x[i]);
}

for(k=9;k>=0;--k)
{
for(e=0,f=e+1;e<=8&&f<=9;++e,++f)
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