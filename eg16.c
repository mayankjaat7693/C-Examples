//heap sort (decreasing order)
#include<stdio.h>
int main()
{
int x[10];
int pi,ci;
int lci,rci;
int cmp_with;
int i,g;

for(i=0;i<=9;++i)
{
printf("Enter a number: ");
scanf("%d",&x[i]);
}

for(i=1;i<=9;++i)
{
ci=i;
while(ci>0)
{
pi=(ci-1)/2;
if(x[pi]<x[ci])break;
g=x[ci];
x[ci]=x[pi];
x[pi]=g;
ci=pi;
}
}
for(i=9;i>0;--i)
{
g=x[0];
x[0]=x[i];
x[i]=g;
pi=0;
while(1)
{
lci=(pi*2)+1;
rci=lci+1;
if(lci>=i)break;
if(rci>=i)cmp_with=lci;
else if(x[lci]<x[rci])cmp_with=lci;
else cmp_with=rci;

if(x[pi]<x[cmp_with])break;
g=x[pi];
x[pi]=x[cmp_with];
x[cmp_with]=g;
pi=cmp_with; 
}
}
for(i=0;i<=9;++i)printf("%d\n",x[i]);
return 0;
}