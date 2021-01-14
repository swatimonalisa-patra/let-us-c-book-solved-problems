#include<stdio.h>
int main()
{
    int number, positive = 0, negative = 0, zero = 0;
    char choice='Y';
    do
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > 0)
        {
            positive++;
        }
        else if (number < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }

        printf("Do you want to Continue(y/n)? ");
        scanf(" %c", &choice); //note the space before " %c" otherwise your while loop would not work

    }while(choice == 'y' || choice == 'Y');


    printf("\nPositive Numbers :%d\nNegative Numbers :%d\nZero Numbers :%d", positive, negative, zero);
}

