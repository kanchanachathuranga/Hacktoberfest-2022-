#include<stdio.h>
int main()
{int a[10],count=0,i;
printf("Enter the elements : ");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{if(a[i]<0)
count++;
}
printf("Number of negative elements are : %d",count);
return 0;
}
