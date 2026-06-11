//Max Heap sort (increasing order)
#include<stdio.h>
void max_heap_sort(int *ptr,int sz)
{
int e,f,g;
int *lci,*rci;
int *pi,*ci;
int *cmp_with;
for(e=1;e<sz;++e)
{
ci=ptr+e;
while(ci > ptr)
{
pi=ptr+(ci-ptr-1)/2;
if(*pi > *ci)break;
g=*pi;
*pi=*ci;
*ci=g;
ci=pi;
}
}
for(f=sz-1;f>0;--f)
{


g=*ptr;
*ptr=*(ptr+f);
*(ptr+f)=g;

pi=ptr;

while(1)
{
lci= ptr + (2 * (pi - ptr) + 1);
rci=lci+1;

if(lci>= ptr+f)break;

if(rci>= ptr+f)cmp_with=lci;

else if(*lci > *rci)cmp_with=lci;

else cmp_with=rci;

if(*pi >= *cmp_with)break;
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

max_heap_sort(x,10);

for(i=0;i<=9;++i)printf("%d\n",x[i]);
}