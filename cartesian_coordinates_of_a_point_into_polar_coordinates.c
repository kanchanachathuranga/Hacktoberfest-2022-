// Convert cartesian co-ordinates of a point into polar co-ordinates

#include<stdio.h>
#include<math.h>
int main()
{float x,y,r,theta,a1,a2,t;
printf("Enter the value of x co-ordinate : ");
scanf("%f",&x);
printf("Enter the value of y co-ordinate : ");
scanf("%f",&y);
r=sqrt(pow(x,2)+pow(y,2));
theta=atan(y/x);  // in radians
a1=cos(theta);    
a2=sin(theta);
printf("polar co-ordinate : %f(%f+i%f)",r,a1,a2);
return 0;
}