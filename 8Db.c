// to calculate the value of a raised to b//
#include<stdio.h>
int power(int a,int b)
{
      int i,p=1;
      for(i=1;i<=b;i++)
            p*=a;
      return p;
}
int main()
{
      int x,n,p;
      printf("\nEnter the Value of 'x'");
      scanf("%d",&x);
      printf("\nEnter the Value of 'n'");
      scanf("%d",&n);
      p=power(x,n);
      printf("\nPower %d",p);
      return 0;
}
