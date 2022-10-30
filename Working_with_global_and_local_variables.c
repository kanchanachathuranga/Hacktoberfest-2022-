#include<stdio.h>
const int g=7;
void display()
{int x=8;
printf("\nx=%d",x);
printf("\ng=%d",g);
}
int main()
{int x=9;
printf("x=%d",x);
printf("\ng=%d",g);
display();
return 0;
}
