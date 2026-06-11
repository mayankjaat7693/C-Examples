//struct pointer using reference oprator( -> )
#include<stdio.h>
struct rectangle
{
int length;
int breadth;
int area;
};


int main()
{
struct rectangle g;
struct rectangle *p;

p=&g;

printf("Enter a length: ");
scanf("%d",&(*p).length);    //rerelly used

printf("Enter a breadth: ");
scanf("%d",&(*p).breadth);

p->area = p->length*p->breadth;

printf(" Area: %d\n",p->area);


return 0;
}