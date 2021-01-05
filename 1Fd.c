//conversion of temperature from farenheit to centigrade//
#include<stdio.h>
int main()
{
	float fr,cent;
	printf("\n enter the temperature");
	scanf("%f",&fr);
	cent=5.0/9.0*(fr-32);
	printf("teperature in centigrade=%f\n",cent);
	return 0;
}

