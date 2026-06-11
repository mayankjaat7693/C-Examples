//Pointer Linear Sort (decreasing order)
#include<stdio.h>
void linear_sort(int *ptr,int sz)
{
int e,f,g;
int *p1,*p2;
int outer_end_point;
int inner_end_point;
outer_end_point=sz-2;
inner_end_point=sz-1;
p1=ptr;
for(e=0;e<=outer_end_point;++e)
{
p2=p1+1;
for(f=e+1;f<=inner_end_point;++f)
{
if(*p1<*p2)
{
g=*p1;
*p1=*p2;
*p2=g;
}
++p2;
}
++p1;
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

linear_sort(x,10);

for(i=0;i<=9;++i)printf("%d\n",x[i]);
return 0;
}