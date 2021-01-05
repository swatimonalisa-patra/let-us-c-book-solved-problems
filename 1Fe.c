//calculate the area & perimeter of rectangle & circle//
#include<stdio.h>
int main()
{
	float l,b,r,ra,rp,ca,cp;
	printf("\n enter length & breath of rectangle");
	scanf("%f %f",&l,&b);
	printf("enter the radious of circle");
	scanf("%f",&r);
	ra=l*b;
	rp=2*(l+b);
	//area & perimeter of rectangle//
	ca=3.14*r*r;
	cp=2*3.14*r;
	//perimeter of circle//
	printf("area of rectangle=%f\n",ra);
	printf("perimeter of rectangle=%f\n",rp);
	printf("area of circle=%f\n",ca);
	printf("perimeter of circle=%f\n",cp);
	return 0;
}
