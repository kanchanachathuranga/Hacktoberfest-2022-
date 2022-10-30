// Program to explain nesting of functions
#include<stdio.h>
void funct2();
void funct1()
{printf("\nfunction 1");
funct2();
}
void funct2()
{printf("\nfunction 2");
}
int main()
{printf("main 1");
funct1();
funct2();
printf("\nmain 2");
return 0;
}
