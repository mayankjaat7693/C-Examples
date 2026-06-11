//Pointer Linear Sort (decreasing order)
#include<stdio.h>
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
if(*(ptr+e)<*(ptr+f))
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

linear_sort(x,10);

for(i=0;i<=9;++i)printf("%d\n",x[i]);
return 0;
}