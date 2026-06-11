#include<stdio.h>
int main()
{
int physics,chemistry,math,english,hindi;
int fail_count;
int grace_marks;
int percentage,division,total;
printf("Enter a marks of physics: ");
scanf("%d",&physics);
if(physics<0||physics>100)
{
printf("invalid input\n");
return 0;
}
printf("Enter a marks of chemistry: ");
scanf("%d",&chemistry);
if(chemistry<0||chemistry>100)
{
printf("invalid input\n");
return 0;
}
printf("Enter a marks of math: ");
scanf("%d",&math);
if(math<0||math>100)
{
printf("invalid input\n");
return 0;
}
printf("Enter a marks of english: ");
scanf("%d",&english);
if(english<0||english>100)
{
printf("invalid input\n");
return 0;
}
printf("enter a marks of hindi: ");
scanf("%d",&hindi);
if(hindi<0||hindi>100)
{
printf("invalid input\n");
return 0;
}

fail_count=0;
if(physics<33)fail_count++;
if(chemistry<33)fail_count++;
if(math<33)fail_count++;
if(english<33)fail_count++;
if(hindi<33)fail_count++;

if(fail_count==0)
{
printf("Result:Pass\n");
total=physics+chemistry+math+english+hindi;
printf("Total: %d\n",total);
percentage=total/5;
printf("PercentageL: %d\n",percentage);
if(percentage>=65)printf("Division: I\n");
if(percentage<65&&percentage>=45)printf("Division:II\n");
if(percentage<45)printf("Division: III\n");
}

if(fail_count==1)
{
printf("Result: Compartment\n"); 
grace_marks=0;
if(physics<33)
{
grace_marks=33-physics;
physics=33;
printf("pass physics with %d grace marks\n",grace_marks);
}
if(chemistry<33)
{
grace_marks=33-chemistry;
chemistry=33;
printf("pass chemistry with %d grace marks\n",grace_marks);
}
if(math<33)
{
grace_marks=33-math;
math=33;
printf("pass math with grace marks\n",grace_marks);
}
if(english<33)
{
grace_marks=33-english;
english=33;
printf("pass english with %d grace marks\n",grace_marks);
}
if(hindi<33)
{
grace_marks=33-hindi;
hindi=33;
printf("pass hindi with %d grace marks\n",grace_marks);
}  
}

if(fail_count>1)
{
printf("Result:Fail\n");
printf("Falling in.....\n");
if(physics<33)printf("physics\n");
if(chemistry<33)printf("chemistry\n");
if(math<33)printf("math\n");
if(english<33)printf("english\n");
if(hindi<33)printf("hindi\n");
}
return 0;
}