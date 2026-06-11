//Malloc Radix Sort (increasing order)
#include<stdio.h>
#include<stdlib.h>
int* accept_input(int *cc)
{
int *z;
int requirement;
int k;

z=(int* )malloc(sizeof(int)*requirement);
if(z==NULL)return NULL;

for(k=0;k<requirement;++k)
{
printf("Enter a number: ");
scanf("%d",&z[k]);
}

*cc=requirement;
return z;
}

int radix_sort(int *ptr,int sz)
{
int e,f,g,t;
int **queue;
int largest;
int divide_of_number;
int divide_by;
int num;
int digit;
int i,j,k;

if(sz<=0)return -1;
if(ptr==NULL)return -2;
     
queue=(int** )malloc(sizeof(int*)*sz);
if(queue==NULL)return -3;

for(t=0;t<sz;++t)
{
queue[t]=(int* )malloc(sizeof(int)*sz);
if(queue[t]==NULL)
{
free(queue[t]);
return -3;
}
}

largest=*(ptr);
for(e=1;e<sz;e++)
{
if(largest<*(ptr+e))largest=*(ptr+e);
}
printf("%d\n",largest);


}


int main()
{
int *p;
int count;
int i;

p=accept_input(&count);
if(p==NULL)
{
printf("Low Memory\n");
return 1;
}

radix_sort(p,count);

for(i=0;i<count;++i)printf("%d\n",p[i]);

free(p);
return 0;
}