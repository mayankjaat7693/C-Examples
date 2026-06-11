//radix sort (decreasing order)
#include<stdio.h>
int main()
{
int x[10];
int queue[10][10];
int indexs[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int largest;
int digit_of_number;
int divide_by;
int i,j,k,e,f;
int num,digit;

for(i=0;i<=9;i++)
{
printf("Enter a number: ");
scanf("%d",&x[i]);
if(x[i]<0)
{
x[i]=x[i]*(-1);
}
}

largest=x[0];
for(e=1;e<=9;++e)
{
if(largest<x[e])largest=x[e];
}
printf("Largest: %d\n",largest);
digit_of_number=1;
while(largest>9)
{
largest=largest/10;
++digit_of_number;
}
printf("Digit of number: %d\n",digit_of_number);
divide_by=1;
for(e=1;e<=digit_of_number;++e)
{
for(f=0;f<=9;++f)
{
num=x[f];
num=num/divide_by;
digit=num%10;
++indexs[digit];
queue[digit][indexs[digit]]=x[f];
}
i=0;
for(j=9;j>=0;--j)
{
k=0;
while(indexs[j]>=0)
{
x[i]=queue[j][k];
--indexs[j];
++i;
++k;
}
}
divide_by=divide_by*10;
}

for(i=0;i<=9;++i)printf("%d\n",x[i]);
return 0;
}
