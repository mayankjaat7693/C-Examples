//Quick sort (increasing order)
void quick_sort(int *ptr,int sz)
{
int e,f,g;
int stack[10][2];
int stack_size;
int top;
int lb,ub;
stack_size = sz;
top=stack_size;
lb=0;
ub=sz-1;
--top;
stack[top][0]=lb;
stack[top][1]=ub;

while(top!=stack_size)
{
lb=stack[top][0];
ub=stack[top][1];
++top;

e=lb;
f=ub;
while(e<f)
{
while(e<ub && *(ptr+e) <= *(ptr+lb))
{
++e;
}
while(*(ptr+f)>*(ptr+lb))
{
--f;
}
if(e<f)
{
g=*(ptr+e);
*(ptr+e)=*(ptr+f);
*(ptr+f)=g;
}
else
{
g=*(ptr+lb);
*(ptr+lb)=*(ptr+f);
*(ptr+f)=g;
}
if(f<ub)
{
--top;
stack[top][0]=f+1;
stack[top][1]=ub;
}
if(f>lb)
{
--top;
stack[top][0]=lb;
stack[top][1]=f-1;
}
}
}
}

#include<stdio.h>
int main()
{
int x[10];
int i;

for(i=0;i<=9;++i)
{
printf("Enter a number: ");
scanf("%d",&x[i]);
}

quick_sort(x,10);

for(i=0;i<=9;++i)printf("%d\n",x[i]);
return 0;
}