#include<stdio.h>
int main()
{
    float h, cc, ts;
    //    flags for three conditions
    int h_f=0, cc_f=0, ts_f=0;
    int grade;
    printf("Enter the value of Hardness: ");
    scanf("%f", &h);
    printf("Enter the value of Carbon Content: ");
    scanf("%f", &cc);
    printf("Enter the value of Tensile Strength: ");
    scanf("%f", &ts);
   //For first three conditional
    if (h>50)
        h_f=1;
    if (cc<0.7)
        cc_f=1;
    if (ts>5600)
        ts_f=1;
    if(h_f==0 && cc_f==0 && ts_f==0)
        grade = 5;
    if(h_f==1 || cc_f==1 || ts==1)
        grade = 6;
    if(h_f==1 && cc_f==0 && ts_f==1)
        grade = 7;
    if(h_f==0 && cc_f==1 && ts_f==1)
        grade = 8;
    if(h_f==1 && cc_f==1 && ts_f==0)
        grade = 9;
    if(h_f==1 && cc_f==1 && ts_f==1)
        grade = 10;
    printf("The grade of steel is: %d", grade);
}
