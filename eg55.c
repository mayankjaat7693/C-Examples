//Merge Sort (increasing order)
#include<stdio.h>
void merge_sort(int *ptr,int sz)
{
int stack_1[10][2];
int stack_2[10][2];
int stack_size1;
int stack_size2;
int top1,top2;
int lb,lb1,lb2;
int ub,ub1,ub2;
int e,f,g,j;
int temp[10];
int mid;
int *p1,*p2,*p3;

stack_size1=sz;
stack_size2=sz;
top1=stack_size1;
top2=stack_size2;

lb=0;
ub=sz-1;

--top1;
stack_1[top1][0]=lb;
stack_1[top1][1]=ub;

while(top1!=stack_size1)
{
lb1=stack_1[top1][0];
ub1=stack_1[top1][1];
++top1;

--top2;
stack_2[top2][0]=lb1;
stack_2[top2][1]=ub1;

mid=(lb1+ub1)/2;
if(lb1 < mid)
{
top1--;
stack_1[top1][0]=lb1;
stack_1[top1][1]=mid;
}

if(mid+1 < ub1)
{
--top1;
stack_1[top1][0]=mid+1;
stack_1[top1][1]=ub1;
}
}
while(top2!=stack_size2)
{
lb2=stack_2[top2][0];
ub2=stack_2[top2][1];
++top2;

mid=(lb2+ub2)/2;

lb1=lb2;
ub1=mid;
lb2=mid+1;
ub2=ub2;
g=*ptr;
p1=ptr+lb1;
p2=ptr+lb2;
for(g=lb1,e=lb1,f=lb2;e<=ub1&&f<=ub2;++g)
{
if(*p1 < *p2)
{
temp[g]= *p1;
++e;
++p1;
}
else 
{
temp[g]= *p2;
++f;
++p2;
}
}

for(;e<=ub1;++e,++g)
{
temp[g]= *p1;
++p1;
}
for(;f<=ub2;++f,++g)
{
temp[g]= *p2;
++p2;
}
p3=ptr+lb1;
for(j=lb1;j<=ub2;++j)
{
*p3=temp[j];
++p3;
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

merge_sort(x,10);

for(i=0;i<=9;++i)printf("%d\n",x[i]);

return 0;
}