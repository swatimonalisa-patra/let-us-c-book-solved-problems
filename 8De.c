#include<stdio.h>
int prime(int x);
void main()
{
    int n;
    printf("Enter an integer");
    scanf("%d", &n);
    prime(n);
}
int prime(int x)
{
    int a;
    for(a=2;a<=x;a++)
    {
        if(x%a==0)
        {
            printf("%d, ",a);
            x = x/a;
            a--;
        }
    }
}
