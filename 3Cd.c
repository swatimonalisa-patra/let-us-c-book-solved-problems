#include<stdio.h>
int main()
{
    int year, by=1900, ly, ry, td, d;
    printf("Enter the year: ");
    scanf("%d", &year);
    year = (year-1)-by; 
    // leap years
    ly = year/4;
   // not leap years
    ry = year - ly;
   // 366 days in a single year
    td = (ry*365) + (ly*366) + 1;
   // actual day
    d=td%7;
    if(d==0)
        printf("Monday");
    else if(d==1)
        printf("Tuesday");
    else if(d==2)
        printf("Wednesday");
    else if(d==3)
        printf("Thursday");
    else if(d==4)
        printf("Friday");
    else if(d==5)
        printf("Saturday");
    else if(d==6)
        printf("Sunday");
    else
        printf("wrong entry");
    return 0;
}
