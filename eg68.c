//Malloc selection sort (increasing order)
#include<stdio.h>
#include<stdlib.h>
int* accept_input(int *cc)
{
int *a;
int requirement;
int d;

printf("How many number you want to feed: ");
scanf("%d",&requirement);

a=(int* )malloc(sizeof(int)*requirement);
if(a==NULL)return NULL;

for(d=0;d<requirement;++d)
{
printf("Enter a number: ");
scanf("%d",&a[d]);
}

*cc=requirement;
return a;
}

void selection_sort(int *ptr,int sz)
{
int e,f,g;
int *num;
int inner_end_point;
int outer_end_point;
inner_end_point=sz-1;
outer_end_point=sz-2;

for(e=0;e<=outer_end_point;++e)
{ 
num=ptr+e;
for(f=e+1;f<=inner_end_point;++f)
{
if(*num>*(ptr+f))
num=ptr+f;
}
g=*(ptr+e);
*(ptr+e)=*num;
*num=g;
}
}

int main()
{
int *p;
int count;
int i;

p=accept_input(&count);
if(p==NULL)
{
printf("Low Memory\n");
return 1;
}

selection_sort(p,count);

for(i=0;i<count;++i)printf("%d\n",p[i]);
free(p);
return 0;
}