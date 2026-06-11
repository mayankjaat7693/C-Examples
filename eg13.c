//insertion sort (increasing order)
#include<stdio.h>
int main()
{
int x[10];
int e,f,i;
int num;

for(i=0;i<=9;++i)
{
printf("Enter a number: ");
scanf("%d",&x[i]);
}

for(e=1;e<=9;++e)
{
num=x[e];
for(f=e-1;f>=0&&num<x[f];--f)
{
x[f+1]=x[f];
}
x[f+1]=num;
}

for(i=0;i<=9;i++)printf("%d\n",x[i]);
return 0;
}