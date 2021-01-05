//calculate Ramesh's gross salary//
#include<stdio.h>
int main()
{
	float bp,da,hra,gpay;
	printf("\n enter basic salary of Ramesh");
	scanf("%f",&bp);
	da=0.4*bp;
	hra=0.2*bp;
	gpay=bp+da+hra;
	//grosspay=sum of basic & all allowances//
	printf("basic salary of Ramesh=%f\n",bp);
	printf("dearness allowance=%f\n",da);
	printf("house rent allowance=%f\n",hra);
	printf("gross pay of Ramesh is=%f\n",gpay);
	return 0;
}
