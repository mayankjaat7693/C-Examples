//shell sort (decreasing order)
#include<stdio.h> 
void shell_sort(int *ptr,int sz)
{
int distance;
int num;
int e,f;
int *p1,*p2;
int outer_end_point;
outer_end_point=sz-1;

distance=3;
while(distance>0)
{
p1=ptr+distance;
for(e=distance;e<=outer_end_point;e+=distance)
{
num=*p1;
p2=p1-distance;
for(f=e-distance;f>=0&&*p2<num;f-=distance)
{
*(p2+distance)=*p2;
p2-=distance;
}
*(p2+distance)=num;
p1+=distance;
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