#include<stdio.h>
int main()
{
    float weight; //weight in pounds
    printf("Enter the weight in pounds: ");
    scanf("%f", &weight);
    if(weight<115)
        printf("Boxer's Weight Class is Flyweight");
    else if(weight>=115 && weight<=121)
        printf("Boxer's Weight Class is Bantamweight");
    else if(weight>=122 && weight<=153)
        printf("Boxer's Weight Class is Featherweight");
    else if(weight>=154 && weight<=189)
        printf("Boxer's Weight Class is Middleweight");
    else if(weight>=190)
        printf("Boxer's Weight Class is Heavyweight");
    else
        printf("You entered wrong entry");
}
