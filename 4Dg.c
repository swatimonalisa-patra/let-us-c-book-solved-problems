//convert RGB coloUr to CMYK colour//
#include<stdio.h>
int main()
{
    float r, g, b, rf, gf, bf, max, w, c, y, m , k; //k stands for black
    printf("Enter the value of Red(0 to 255): ");
    scanf("%f", &r);
	printf("Enter the value of Green(0 to 255): ");
    scanf("%f", &g);
    printf("Enter the value of Blue(0 to 255): ");
    scanf("%f", &b);
    rf = r/255;
    gf = g/255;
    bf = b/255;
    printf("Red: %f\nGreen: %f\nBlue: %f\n", rf, gf, bf);
    max = rf;
    if (max<gf)
        max = gf;
    if (max<bf)
        max = bf;
	//w stands for white
    w = max;
    printf("White: %f\n\n", w);
    c = (w-rf)/w;
    m = (w-gf)/w;
    y = (w-bf)/w;
    k = 1- w;
    printf("The value of Cyan: %f\n", c);
    printf("The value of Magenta: %f\n", m);
    printf("The value of Yellow: %f\n", y);
    printf("The value of Black: %f\n", k);

}
