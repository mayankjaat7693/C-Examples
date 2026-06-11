//selection sort (increasing order)
#include<stdio.h>
int main()
{
int x[10];
int e,f,g;
int index_of_smallest;
int i;

for(i=0;i<=9;i++)
{
printf("Enter a number: ");
scanf("%d",&x[i]);
}


for(e=0;e<=8;++e)
{
index_of_smallest=e;
for(f=e+1;f<=9;++f)
{
if(x[f]<x[index_of_smallest])index_of_smallest=f;
}
g=x[e];
x[e]=x[index_of_smallest];
x[index_of_smallest]=g;
}

for(i=0;i<=9;++i)printf("%d\n",x[i]);
return 0;
}