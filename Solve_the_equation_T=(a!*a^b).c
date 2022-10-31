// Solve the equation T = a!*a^b

#include<stdio.h>
int main()
{int fact=1,i,j,a,b,pow=1,T;
printf("Enter the value of a and b : ");
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++)
{pow=pow*a;
}
for(j=1;j<=a;j++)
{fact=fact*j;
}
T=pow*fact;
printf("Result is : %d",T);
return 0;
}
