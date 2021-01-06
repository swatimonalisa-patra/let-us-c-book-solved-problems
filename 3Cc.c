//whether the year is leap year or not//
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the Year");
    scanf("%d", &year);
   //if year is  divisible by 4
    if (year % 4 == 0)
    {
        //if year is divisible by 4 and 100
        if (year % 100 == 0)
        {
            //if year is divisible by 4, 100, and 400
            if (year % 400 == 0)
            {
                printf("%d is a Leap Year", year);
            }

            else
            {
                printf("%d is not a Leap Year", year);
            }
        }
        else
        {
            printf("%d is a Leap Year", year);
        }
    }
    else
    {
        printf("%d is not a Leap year", year);
    }
    return 0;
}

