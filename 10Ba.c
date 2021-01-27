#include<stdio.h>
int rec_func(int num);
int non_rec_func(int num);
void main()
{
    int num, rec, non_rec;
    printf("Enter an integer: ");
    scanf("%d", &num);

    rec = rec_func(num);
    non_rec = non_rec_func(num);

    printf("\n Calculate sum using recursion: %d",rec);
    printf("\n Calculate sum without recursion: %d",non_rec);
}

int rec_func(int num)
{
    if (num==0)
    {
        return 0;
    }

    return (num%10+rec_func(num/10));
}

int non_rec_func(int num)
{
    int res, count=0;
    while(num!=0)
    {
        res=num%10;
        count += res;   
        num = num/10;
    }
    return count;
}

