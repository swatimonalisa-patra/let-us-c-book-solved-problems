//program to calculate & print paper size// 
#include<stdio.h>
int main()
{
	int length,width,temp;
	length=1189;
	width=841;
	int i;
	for(i=0;i<=8;i++)
	{
		printf("A%d size: %dmm*%dmm\n",i,length,width);
		temp=length;
		length=width;
		length=temp/2;
	}
}

