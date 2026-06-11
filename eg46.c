//Radix sort (deceasing order)
#include<stdio.h>
void radix_sort(int *ptr,int sz)
{
int e,f,g;
int queue[10][10];
int indexs[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int largest;
int digit_of_number;
int digit,num;
int divide_by;
int *i,j,k;
largest=*ptr;

for(e=1;e<sz;++e)
{ 
if(largest<*(ptr+e))largest=*(ptr+e);
}
printf("Largest: %d\n",largest);
digit_of_number=1;
while(largest>9)
{
largest=largest/10;
++digit_of_number;
}
printf("Digit Of Number: %d\n",digit_of_number);
divide_by=1;
for(g=digit_of_number;g>0;--g)
{ 
for(f=0;f<sz;++f)
{
num=*(ptr+f);
num=num/divide_by;
digit=num%10;
++indexs[digit];
queue[digit][indexs[digit]]= *(ptr+f);
}
i=ptr;
for(j=sz-1;j>=0;--j)
{
k=0;
while(indexs[j]>=0)
{
*i=queue[j][k];

++k;
++i;
--indexs[j];
}
}
divide_by = divide_by*10;
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
if(x[i]<0)x[i]=x[i]*(-1);
}

radix_sort(x,10);

for(i=0;i<=9;++i)
{
printf("%d\n",x[i]);
}
return 0;
}