//insertion Sort (increasing order)
#include<stdio.h>
void insertion_sort(int *ptr,int sz)
{
int e,f;
int num;
int *p1,*p2;
int outer_end_point;
outer_end_point=sz-1;

p1=ptr+1;
for(e=1;e<=outer_end_point;++e)
{
num=*p1;
p2=p1-1;
for(f=e-1;f>=0&&*p2>num;--f)
{
*(p2+1)=*p2;
--p2;
}
*(p2+1)=num;
p1++;
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

insertion_sort(x,10);

for(i=0;i<=9;++i)printf("%d\n",x[i]);

return 0;
}