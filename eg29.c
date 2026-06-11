//Bubble Sort (increasing order)
#include<stdio.h>
void bubble_sort(int *ptr,int sz)
{
int e,f,g,k;
int *p1,*p2;
int inner_end_point_1;
int inner_end_point_2;
int outer_start_point;
inner_end_point_1=sz-2;
inner_end_point_2=sz-1;
outer_start_point=sz-1;

for(k=outer_start_point;k>=0;--k)
{
p1=ptr;
p2=p1+1;
for(e=0,f=e+1;e<=inner_end_point_1&&f<=inner_end_point_2;++e,++f)
{
if(*p1>*p2)
{
g=*p1;
*p1=*p2;
*p2=g;
}
++p1;
++p2;
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