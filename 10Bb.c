#include<stdio.h>
void prime(int num);
void main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("The Prime Factors of %d are: ",num);
    prime(num);
}
void prime(int num)
{
    int x;
    for(x=2;x<=num;x++)
    {
        if(num%x==0)
        {
            printf("%d, ",x);
            prime(num/x);
            break;
        }
    }
}

