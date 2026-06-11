//Quick sort (increasing order)
#include<stdio.h>
int main()
{
int x[10];
int stack[10][2];
int stack_size;
int top;
int lb,ub;
int e,f,g;

for(e=0;e<=9;++e)
{
printf("Enter a number: ");
scanf("%d",&x[e]);
}

stack_size=10;
top=stack_size;
lb=0;
ub=9;

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
while(e<ub&&x[e]<=x[lb])
{
++e;
}
while(x[f]>x[lb])
{
--f;
}
if(e<f)
{
g=x[e];
x[e]=x[f];
x[f]=g;
}
else
{
g=x[f];
x[f]=x[lb];
x[lb]=g;
}

if(f+1<ub)
{
--top;
stack[top][0]=f+1;
stack[top][1]=ub;
}
if(f-1>lb)
{
--top;
stack[top][0]=lb;
stack[top][1]=f-1;
}
}
}

for(e=0;e<=9;++e)printf("%d\n",x[e]);
return 0;
}