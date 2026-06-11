//Shell Sort (increasing order)
#include<stdio.h>
void shell_sort(int *ptr,int sz)
{
int distance;
int num;
int e,f;
int outer_end_point;
outer_end_point=sz-1;

distance=3;
while(distance>0)
{
for(e=distance;e<=outer_end_point;e+=distance)
{
num=*(ptr+e);
for(f=e-distance;f>=0&&*(ptr+f)>num;f-=distance)
{
*(ptr+f+distance)=*(ptr+f);
}
*(ptr+f+distance)=num;
}
--distance;
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

shell_sort(x,10);

for(i=0;i<=9;++i)printf("%d\n",x[i]);

return 0;
}