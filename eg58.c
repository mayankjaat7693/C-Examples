// struct pointer(this technique is rarelly use)
#include<stdio.h>
struct rectangle
{
int length;
int breadth;
int area;
};

int main()
{
struct rectangle r;
struct rectangle *p;
p=&r;

(*p).length = 49;

(*p).breadth =34;

(*p).area = ((*p).length)*((*p).breadth);

printf("Length: %d * Breadth: %d = Area: %d\n",(*p).length,(*p).breadth,(*p).area);
return 0;
}