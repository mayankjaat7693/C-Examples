// Malloc (as per requirement memory allocation
#include<stdio.h>
#include<stdlib.h>
int* accept_input(int *cc)
{
int *n;
int requirement;
int i;
printf("How many number you want to feed: ");
scanf("%d",&requirement);

n=(int* )malloc(sizeof(int)*requirement);
if(n==NULL)return NULL;

for(i=0;i<requirement;++i)
{
printf("Enter a number: ");
scanf("%d",&n[i]);
}
*cc=requirement;

return n;
}

int compute_total(int *s,int c)
{
int k;
int sum;

sum=0;
for(k=0;k<c;++k)
{
sum=s[k]+sum;
}
return sum;
}

int main()
{
int *p;
int count;
int total;

p=accept_input(&count);
if(p==NULL)
{
printf("Low Memory\n");
return 1;
}

total=compute_total(p,count);

printf("Total is %d\n",total);
return 0;
}