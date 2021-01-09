#include<stdio.h>
int fact(int num);  
//function prototype declaration
int main()
{
    int n,fac;
    printf("Enter an integer: ");
    scanf("%d", &n);
    fac = fact(n); //function call
    printf("The factorial of %d is %d", n, fac);
}
//factorial function
int fact(int num)   
{
    int r;
    r=num;
    while(num>1)
    {
        r=r*(num-1);
        num = num-1;
    }
    return r;
}
