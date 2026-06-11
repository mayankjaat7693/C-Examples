//Malloc insertion sort (decreasing order)
#include<stdio.h>
#include<stdlib.h>
int* accept_input(int *cc)
{
int *o;
int u;
int requirement;

printf("how many number you want to feed: ");
scanf("%d",&requirement);

o=(int* )malloc(sizeof(int)*requirement);
if(o==NULL)return NULL;

for(u=0;u<requirement;++u)
{
printf("Enter a number: ");
scanf("%d",&o[u]);
} 

*cc=requirement;
return o;
}

void insertion_sort(int *ptr,int sz)
{
int e,f;
int num;
int end_point;
end_point=sz-1;


for(e=1;e<=end_point;++e)
{
num=*(ptr+e);
for(f=e-1;f>=0&&num>*(ptr+f);--f)
{
*(ptr+f+1)=*(ptr+f);
}
*(ptr+f+1)=num;
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

insertion_sort(p,count);

for(i=0;i<count;++i)printf("%d\n",p[i]);

free(p);
return 0;
}