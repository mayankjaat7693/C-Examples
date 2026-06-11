#include<stdio.h>
#include<math.h>
int main()
{
    int sp,ep;
    int x,y;
    int flag;
    int end_point;

    printf("Enter start point: ");
    scanf("%d",&sp);
    printf("Enter end point: ");
    scanf("%d",&ep);
    if(sp<1)
    {
        sp=2;
    }
    x=sp;
    while(x<=ep)
    { 
        flag=0;
        y=2;
        while(y<=x/2)
        {
            if(x%y==0)
            { 
                flag=1;
                break;
            }
        ++y;
        }
        
        if(flag==0)printf("%d\n",x);
        ++x;
    }
    

    return 0;
}