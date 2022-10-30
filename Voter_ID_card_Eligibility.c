 lines (12 sloc)  221 Bytes

// Voter ID card Eligibility

#include<stdio.h>
int main()
{ int age;
	printf("Enter the age : ");
	scanf("%d",&age);
	if(age>18)
	{printf("\nEligible for voter id");}
	else
	printf("\nNot Eligibe for id");
	return 0;
	}
