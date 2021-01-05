#include<stdio.h>
int main()
{
	int num=0,n;
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
		num=num*10;
		num=n%10+num;
		n=n/10;
	}
	printf("%d",num);
	return 0;
}
