//merge sort (increasing order)
#include<stdio.h>
int main()
{
int x[10];
int stack_1[10][2];
int stack_2[10][2];
int size1,size2;
int top1,top2;
int lb,ub,mid;
int e,f,g,i;
int temp[10];
int lb1,lb2,ub1,ub2;

for(i=0;i<=9;++i)
{
printf("Enter a number: ");
scanf("%d",&x[i]);
}

size1=10;
size2=10;
top1=size1;
top2=size2;
lb=0;
ub=9;

--top1;
stack_1[top1][0]=lb;
stack_1[top1][1]=ub;

while(top1!=size1)
{
lb1=stack_1[top1][0];
ub1=stack_1[top1][1];
++top1;

--top2;
stack_2[top2][0]=lb1;
stack_2[top2][1]=ub1;

mid=(lb1+ub1)/2;

if(lb1<mid)
{
--top1;
stack_1[top1][0]=lb1;
stack_1[top1][1]=mid;
}

if(mid+1<ub1)
{
--top1;
stack_1[top1][0]=mid+1;
stack_1[top1][1]=ub1;
}
}
while(top2!=size2)
{
lb2=stack_2[top2][0];
ub2=stack_2[top2][1];
++top2;

mid=(lb2+ub2)/2;

lb1=lb2;
ub1=mid;
lb2=mid+1;
ub2=ub2;

for(g=lb1,e=lb1,f=lb2;e<=ub1&&f<=ub2;++g)
{
if(x[e]<x[f])
{
temp[g]=x[e];
++e;
}
else
{
temp[g]=x[f];
++f;
}
}
for(;e<=ub1;++e,++g)temp[g]=x[e];
for(;f<=ub2;++f,++g)temp[g]=x[f];
for(i=lb1;i<=ub2;++i)x[i]=temp[i];
}

for(i=0;i<=9;++i)printf("%d\n",x[i]);
return 0;
}