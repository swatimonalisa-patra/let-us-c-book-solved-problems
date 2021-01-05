#include<stdio.h>
int main()
{
	int a,b,c;
	//triangle side s length//
	float s=0,area=0;
	printf("enter length of AB");
	scanf("%d",&a);
	printf("enter length of BC");
	scanf("%d",&b);
	printf("enter length of CA");
	scanf("%d",&c);
	s=(a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle is:%f,area");
	return 0;
}
