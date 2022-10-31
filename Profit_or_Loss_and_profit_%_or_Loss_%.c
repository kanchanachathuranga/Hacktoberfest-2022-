// Profit or Loss and Profit % or Loss %

#include<stdio.h>
int main()
{float cp,sp,profit,loss,profitpercentage,losspercentage;
printf("Enter the cost price : Rs ");
scanf("%f",&cp);
printf("Enter the selling price : ");
scanf("%f",&sp);
printf("\nCalculating!!!, please wait");
if(sp>cp)
{printf("\n\nPerson is in profit");
profit=sp-cp;
profitpercentage=(profit*100)/cp;
printf("\nProfit : %f",profit);
printf("\nProfit percentage : %f %",profitpercentage);
}
else
{printf("\n\nPerson is in Loss");
loss=cp-sp;
losspercentage=(loss*100)/cp;
printf("\nLoss : %f",loss);
printf("\nLoss percentage : %f %",losspercentage);}
return 0;}
