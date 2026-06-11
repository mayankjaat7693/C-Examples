//Min Heap sort (decreasing order)
#include<stdio.h>
void min_heap_sort(int *ptr,int sz)
{
int e,f,g;
int *lci,*rci;
int *pi,*ci;
int *cmp_with;
int *p1,*p2;
p1=ptr;
for(e=1;e<sz;++e)
{
ci=p1+e;
while(ci > p1)
{
pi=ptr+(ci-ptr-1)/2;
if(*pi < *ci)break;
g=*pi;
*pi=*ci;
*ci=g;
ci=pi;
}
}
for(f=sz-1;f>0;--f)
{
p2=ptr+f;

g=*p1;
*p1=*p2;
*p2=g;

pi=p1;

while(1)
{
lci= ptr + (2 * (pi - ptr) + 1);
rci=lci+1;

if(lci>= p2)break;

if(rci>= p2)cmp_with=lci;

else if(*lci < *rci)cmp_with=lci;

else cmp_with=rci;

if(*pi < *cmp_with)break;
g=*pi;
*pi=*cmp_with;
*cmp_with=g;

pi=cmp_with;
}
}
}
int main()
{
int x[10];
int i;

for(i=0;i<=9;++i)
{
printf("Enter a number: ");
scanf("%d",&x[i]);
}

min_heap_sort(x,10);

for(i=0;i<=9;++i)printf("%d\n",x[i]);
}