float D = 12742.0;
float PI = 3.1416;

#include <stdio.h>
int main() {
    float r=D/2;
    printf("The world has 12742.00 km of diameter, %.2f km\n",D*PI);
    printf("circumference, %.2f km^2 of area, ",PI*r*r);
    printf("%.2f km^3 of volume,\n",4.0/3*PI*r*r*r);
    printf("and %.2f km^2 of surface area",4*PI*r*r);
    return 0;
}