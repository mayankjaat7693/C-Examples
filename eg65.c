//using malloc as per user requirement and array 
//linear sort (decreasing order)
#include<stdio.h>
#include<stdlib.h>
int* accept_input(int *cc)
{
int *v;
int requirement;
int i;

printf("How many number you want feed: ");
scanf("%d",&requirement);

v=(int* )malloc(sizeof(int)*requirement);
if(v==NULL)return NULL;

for(i=0;i<requirement;++i)
{
printf("Enter a number: ");
scanf("%d",&v[i]);
}

*cc=requirement;
return v;
}

void linear_sort(int *ptr,int sz)
{
int e,f,g;
int outer_end_point;
int inner_end_point;

outer_end_point=sz-2;
inner_end_point=sz-1;


for(e=0;e<=outer_end_point;++e)
{
for(f=e+1;f<=inner_end_point;++f)
{
if(*(ptr+e) < *(ptr+f))
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
int *p;
int count;
int i;

p=accept_input(&count);
if(p==NULL)
{
printf("Low Memory\n");
return 1;
}

linear_sort(p,count);

for(i=0;i<count;++i)
{
printf("%d\n",p[i]);
}
free(p);
return 0;
}