#include<stdio.h>
int main()
{
    float l, b, area, perimeter;
    printf("Enter the length of rectangle: ");
    scanf("%f", &l);
    printf("Enter the breadth of rectangle: ");
    scanf("%f", & b);
    area = l*b;
    perimeter = 2*(l+b);
    printf("The area of rectangle: %f\n", area);
    printf("The perimeter of rectangle: %f\n", perimeter);
    if (area>perimeter)
        printf("Area of rectangle is greater than it's perimeter");
    else
        printf("Perimeter of rectangle is greater than it's area");
}
