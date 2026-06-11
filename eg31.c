//Bubble Sort (increasing order)
#include<stdio.h>
void bubble_sort(int *ptr,int sz)
{
int e,f,g,k;
int inner_end_point_1;
int inner_end_point_2;
int outer_start_point;
inner_end_point_1=sz-2;
inner_end_point_2=sz-1;
outer_start_point=sz-1;

for(k=outer_start_point;k>=0;--k)
{
for(e=0,f=e+1;e<=inner_end_point_1&&f<=inner_end_point_2;++e,++f)
{
if(*(ptr+e)>*(ptr+f))
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
int x[10];
int i;
 
for(i=0;i<=9;++i)
{
printf("Enter a number: ");
scanf("%d",&x[i]);
}

bubble_sort(x,10);

for(i=0;i<=9;++i)printf("%d\n",x[i]);
return 0;
}