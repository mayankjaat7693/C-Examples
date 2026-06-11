// malloc bubble sort (increasing order)
#include<stdio.h>
#include<stdlib.h>
int* accept_input(int *cc)
{
int requirement;
int *r;
int t;

printf("How many number you want to feed: ");
scanf("%d",&requirement);

r=(int* )malloc(sizeof(int)*requirement);
if(r==NULL)return NULL;

for(t=0;t<requirement;++t)
{
printf("Enter a number: ");
scanf("%d",&r[t]);
}

*cc=requirement;
return r;
}

void bubble_sort(int *ptr,int sz)
{
int e,f,g,k;
int outer_end_point;
int inner_end_point;
outer_end_point=sz-2;
inner_end_point=sz-1;

for(k=inner_end_point;k>=0;--k)
{
for(e=0,f=e+1;e<=outer_end_point&&f<=inner_end_point;++f,++e)
{
if(*(ptr+e) > *(ptr+f))
{
g=*(ptr+e);
*(ptr+e)=*(ptr+f);
*(ptr+f)=g;
}
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
printf("Low memory\n");
return 1;
}

bubble_sort(p,count);

for(i=0;i<count;++i)printf("%d\n",p[i]);
free(p);
return 0;
}