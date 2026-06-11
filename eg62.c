//using pointer array and compute area and increasing //order arrange
#include<stdio.h>
struct rectangle
{
int length;
int breadth;
int area;
};

void compute(struct *ptr,int sz)
{
int e,f,m;

for(e=0;e<=sz-2;++e)
{
for(f=e+1;f<=sz-1;++f)
{
if(ptr[e]->length>ptr[f]->length)
{
m=ptr[e]->length;
ptr[e]->length=ptr[f]->length;
ptr[f]->length=m;

m=ptr[e]->breadth;
ptr[e]->breadth=ptr[f]->breadth;
ptr[f]->breadth=m;

m=ptr[e]->area;
ptr[e]->area=ptr[f]->area;
ptr[f]->area=m;
}
else
{
if(g[e].length==g[f].length&&g[e].breadth>g[f].breadth)
{
m=ptr[e]->length;
ptr[e]->length=ptr[f]->length;
ptr[f]->length=m;

m=ptr[e]->breadth;
ptr[e]->breadth=ptr[f]->breadth;
ptr[f]->breadth=m;

m=ptr[e]->area;
ptr[e]->area=ptr[f]->area;
ptr[f]->area=m;
}
}
}
}



}
int main()
{
struct rectangle g[10];
struct rectangle *p;
int i;
p=&g;

for(i=0;i<=9;i++)
{
printf("Enter a Length: ");
scanf("%d",&p[i]->length);
printf("Enter a Breadth: ");
scanf("%d",&p[i]->breadth);

p[i]->area=p[i]->length * g[i]->breadth;
}

compute(g,10);

for(i=0;i<=9;i++)
{
printf("Length: %d\nBreadth: %d\nArea: %d\n\n",g[i].length,g[i].breadth,g[i].area);
}

return 0;
}