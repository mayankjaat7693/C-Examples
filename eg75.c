//Malloc Max Heap Sort (decreasing order)
#include<stdio.h>
#include<stdlib.h>
int* accept_input(int *cc)
{
int requirement;
int *z;
int k;

printf("how many number you want to feed: ");
scanf("%d",&requirement);

z=(int* )malloc(sizeof(int)*requirement);
if(z==NULL)return NULL;

for(k=0;k<requirement;++k)
{
printf("Enter a number: ");
scanf("%d",&z[k]);
}

*cc=requirement;
return z;
}

void heap_sort(int *ptr,int sz)
{
int e,f,g;
int *pi,*ci;
int *lci,*rci;
int *cmp_with;
int end_point;
end_point=sz-1;

for(e=0;e<=end_point;++e)
{
ci=ptr+e;
while(ci>ptr)
{
pi=ptr+(ci-ptr-1)/2;

if(*pi<*ci)break;

g=*pi;
*pi=*ci;
*ci=g;
ci=pi;

}
}
for(f=end_point;f>0;--f)
{
g=*ptr;
*ptr=*(ptr+f);
*(ptr+f)=g;
pi=ptr;

while(1)
{
lci=ptr+(pi-ptr)*2+1;
rci=lci+1;

if(lci >= ptr+f)break;
if(rci >= ptr+f)cmp_with=lci;
else 
{
if(*lci < *rci)
{
cmp_with=lci;
}
else 
{
cmp_with=rci;
}
}

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
int count;
int *p;
int i;

p=accept_input(&count);
if(p==NULL)
{
printf("Low Memory\n");
return 1;
}

heap_sort(p,count);

for(i=0;i<count;++i)printf("%d\n",p[i]);
free(p);
return 0;
}