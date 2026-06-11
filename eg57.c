//stuct (self build data type)
#include<stdio.h>
struct rectangle 
{
int breadth;
int length;
int area;
};

int main()
{
struct rectangle g;

printf("Enter a length: ");
scanf("%d",&g.length);
printf("Enter a breadth: ");
scanf("%d",&g.breadth);

g.area=g.length * g.breadth;

printf("Area: %d\n",g.area);
return 0;
}