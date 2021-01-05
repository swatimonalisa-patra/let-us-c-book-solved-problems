//program to receive values of lattitude to longitude//
#include<stdio.h>
#include<math.h>
int main()
{
    float L1, L2, G1, G2, dist, dist_km, dist_nm, dL, dG;
	 //input two points  location  in degree form//
    printf("Enter the co-ordinate of first place: ");
    scanf("%f %f", &L1, &G1);
    printf("Enter the co-ordinate of second place: ");
    scanf("%f %f", &L2, &G2);
   //find out the distance between two end points using formula//
    dL = L2-L1;
    dG = G2-G1;
    dist= sqrt((dL*dL)+(dG)*(dG));
    dist_km = dist*100;
    printf("The distance between two place in kilometer: %f", dist_km);
    //convert kilometer into nautical miles//
    dist_nm = dist_km/1.852;
    printf("\nThe distance between two place in nautical miles: %f", dist_nm);
    return 0;
}
