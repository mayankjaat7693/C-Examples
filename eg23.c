//Pointer  largest
#include<stdio.h>
int largest_pointer(int *ptr,int sz)
{
int e;
int max;
max= *ptr;
for(++ptr,e=1;e<sz;++e)
{
if(max< *ptr)max=*ptr;
++ptr;
}
return max;
}

int main()
{
int x[10];
int i;
int largest;

for(i=0;i<=9;++i)
{
printf("Enter a number: ");
scanf("%d",&x[i]);
}

largest=largest_pointer(x,10);

printf("Largest: %d\n",largest);
return 0;
}