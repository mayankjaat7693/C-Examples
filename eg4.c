//febonnacci series
#include<stdio.h>
int main()
{
int e,f,g;
int cnt,j;
printf("Enter a count: ");
scanf("%d",&cnt);
e=0;
f=1;
j=1;
while(j<=cnt)
{
printf("%d\n",e);
g=e+f;
e=f;
f=g;
++j;
}


return 0;
}