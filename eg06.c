//largest number
#include<stdio.h>
int main()
{
int e;
int largest;
int x[10];

for(e=0;e<=9;++e)
{
printf("Enter a number: ");
scanf("%d",&x[e]);
}

largest=x[0];
for(e=1;e<=9;++e)
{
if(largest<x[e])largest=x[e];
}

printf("Largest: %d",largest);
return 0;
}
