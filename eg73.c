//Malloc shell sort (decreasing order)
#include<stdio.h>
#include<stdlib.h>
int* accept_input(int *cc)
{
int *z;
int requirement;
int k;

printf("how many number you want to feed: ");
scanf("%d",&requirement);

z=(int* )malloc(sizeof(int)*requirement);

for(k=0;k<requirement;++k)
{
printf("Enter a number: ");
scanf("%d",&z[k]);
}

*cc=requirement;
return z;
}

void shell_sort(int *ptr,int sz)
{
int e,f;
int distance;
int num;
int end_point;
end_point=sz-1;
for(distance=3;distance>0;--distance)
{
for(e=distance;e<=end_point;e+=distance)
{
num=*(ptr+e);
for(f=e-distance;f>=0&&num>*(ptr+f);f-=distance)
{
*(ptr+f+distance)=*(ptr+f);
}
*(ptr+f+distance)=num;
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

shell_sort(p,count);

for(i=0;i<count;++i)printf("%d\n",p[i]);
free(p);
return 0;
}