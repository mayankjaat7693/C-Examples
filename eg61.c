//using array and compute area and increasing order
#include<stdio.h>
struct rectangle
{
int length;
int breadth;
int area;
};

int main()
{
struct rectangle g[10];
int i,e,m,f;

for(i=0;i<=9;i++)
{
printf("Enter a Length: ");
scanf("%d",&g[i].length);
printf("Enter a Breadth: ");
scanf("%d",&g[i].breadth);

g[i].area=g[i].length * g[i].breadth;
}

for(e=0;e<=8;++e)
{
for(f=e+1;f<=9;++f)
{
if(g[e].length<g[f].length)
{
m=g[e].length;
g[e].length=g[f].length;
g[f].length=m;

m=g[e].breadth;
g[e].breadth=g[f].breadth;
g[f].breadth=m;

m=g[e].area;
g[e].area=g[f].area;
g[f].area=m;
}
else
{
if(g[e].length==g[f].length&&g[e].breadth<g[f].breadth)
{
m=g[e].length;
g[e].length=g[f].length;
g[f].length=m;

m=g[e].breadth;
g[e].breadth=g[f].breadth;
g[f].breadth=m;

m=g[e].area;
g[e].area=g[f].area;
g[f].area=m;
}
}
}
}
for(i=0;i<=9;i++)
{
printf("Length: %d\nBreadth: %d\nArea: %d\n\n",g[i].length,g[i].breadth,g[i].area);
}

return 0;
}