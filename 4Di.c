//calculate the BMI & BMI category
#include<stdio.h>
#include<math.h>
int main()
{
    float weight, height, BMI;
    //Weight should be in Kilograms
    //Height should be in Meters
    printf("Enter the weight of person: ");
    scanf("%f", &weight);
    printf("Enter the height of person: ");
    scanf("%f", &height);
    BMI = weight/(pow(height, 2));
    printf("The BMI of person is: %f\n", BMI);
    if (BMI>0 && BMI<=15)
        printf("BMI Category is Starvation");
    else if (BMI>=15.1 && BMI<=17.5)
        printf("BMI Category is Anorexic");
    else if (BMI>17.6 && BMI<=18.5)
        printf("BMI Category is Underweight");
    else if (BMI>18.6 && BMI<=24.9)
        printf("BMI Category is Ideal");
    else if (BMI>25 && BMI<=25.9)
        printf("BMI Category is Overweight");
    else if (BMI>30 && BMI<=30.9)
        printf("BMI Category is Obese");
    else if (BMI>=40)
        printf("BMI Category is Morbidly Obese");

}
