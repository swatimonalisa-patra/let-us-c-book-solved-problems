#include<stdio.h>  
int main()  
{  
    float deg,rad;  
    const float PI = 3.14;  
    printf("Enter angle in degree\n");  
    scanf("%f",&deg);  
    rad=deg*(PI/180.0);  
    printf("Sin(%f) = %f\n", deg, sin(rad));  
    printf("Cos(%f) = %f\n", deg, cos(rad));  
    printf("Tan(%f) = %f\n", deg, tan(rad));  
    printf("Cosec(%f) = %f\n", deg, 1/sin(rad));  
    printf("Sec(%f) = %f\n", deg, 1/cos(rad));  
    printf("Cot(%f) = %f\n", deg, 1/tan(rad));  
    return 0;  
}  

