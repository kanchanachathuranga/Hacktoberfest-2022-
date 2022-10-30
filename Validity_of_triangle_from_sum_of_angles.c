// To check whether the triangle is valid or not

#include<stdio.h>
int main()
{int angle1,angle2,angle3,sum;
printf("Angle 1 : ");
scanf("%d",&angle1);
printf("Angle 2 : ");
scanf("%d",&angle2);
printf("Angle 3 : ");
scanf("%d",&angle3);
sum=angle1+angle2+angle3;
if(angle1!=0 && angle2!=0 && angle3!=0)
{ if(sum==180)
{printf("Sum of angles is : %d\nTriangle is valid",sum);
}
else
printf("sum of angles is : %d\nTriangle is not valid",sum);
}
else
printf("Triangle is not formed, angle cannot be zero");
return 0;
}
