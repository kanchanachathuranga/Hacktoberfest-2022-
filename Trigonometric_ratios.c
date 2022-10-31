//To find all the trigonometric ratios by taking the input in degrees from the user

#include<stdio.h>
#include<math.h>
int main()
{float sinx,cosx,tanx,cosecx,secx,cotx,angle;
printf("Enter the angle in degrees : ");
scanf("%f",&angle);
sinx=sin((angle*3.142857142857143)/180);
cosx=cos((angle*3.142857142857143)/180);
tanx=tan((angle*3.142857142857143)/180);
cosecx=1/sinx;
secx=1/cosx;
cotx=1/tanx;
printf("\nsin(%f)=%f\ncos(%f)=%f\ntan(%f)=%f\ncosec(%f)=%f\nsec(%f)=%f\ncot(%f)=%f",angle,sinx,angle,cosx,angle,tanx,angle,cosecx,angle,secx,angle,cotx);
return 0;
}
