//program to find sum of a 5 digit no enter through the key board//
#include<stdio.h>
int main()
{
	int num,sum=0;
	//input a number from user//
	printf("enter any number to find sum of its digit");
	scanf("%d",&num);
	while(num!=0)
	{
	sum+=num%10;
	num=num/10;	
	}
	printf("sum of digits=%d",sum);
	return 0;
}
