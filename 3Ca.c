#include<stdio.h>
int main()
{
float cp, sp, p, l;
printf("Enter the cost price of an item");
scanf("%f", &cp);
printf("Enter the selling price of an item");
scanf("%f", &sp);
if (sp>cp) // profit 
 {
p=sp-cp;
printf("We earn %f profit by selling item.", p);
 }
else if (sp<cp) //loss
  {
l=cp-sp;
printf("\nWe incurred %f loss on selling item.", l);
  }
else    // (cost price == selling price)
    {
        printf("\nWe don't get any loss and profit on selling item");
    }
return 0;
}
