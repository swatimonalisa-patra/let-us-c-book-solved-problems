//to calculate the coordinates
#include<stdio.h>
#include<math.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    double ab, bc, ac, abc;
    printf("Enter the co-ordinates of first point (X1, Y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the co-ordinates of second point (X2, Y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the co-ordinates of third point (X3, Y3): ");
    scanf("%d %d", &x3, &y3);
    //suppose we have three points a, b, c
    ab = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    bc = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    ac = sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    printf("ab: %f\t bc: %f\t ac: %f\n",ab, bc, ac);
    abc = ab+bc;
    if(abc==ac)
    {
        printf("ab + bc = ac\n");
        printf("All the three points fall on one straight line.");
    }
    else
        printf("All the three points are not present on one straight line.");

return 0;
}
