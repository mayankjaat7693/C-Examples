//Pointer Smallest
#include<stdio.h>
int smallest_pointer(int *ptr,int sz)
{
int e;
int min;
min= *ptr;
for(++ptr,e=1;e<sz;++e)
{
if(min>*ptr)min=*ptr;
++ptr;
}
return min;
}

int main()
{
int x[10];
int i;
int smallest;

for(i=0;i<=9;++i)
{
printf("Enter a number: ");
scanf("%d",&x[i]);
}

smallest=smallest_pointer(x,10);

printf("Smallest: %d\n",smallest);
return 0;
}