#include <stdio.h>
float triagle_area_finder(float width, float height){
    float area = width * height/2;
    return area;
}
int main(){
    printf("Area of first triangle is %.2f square metre\n", triagle_area_finder(10.0,5.0));
    printf("Area of second triangle is %.2f square metre\n", triagle_area_finder(7.0,8.0));
    printf("Area of third triangle is %.2f square metre", triagle_area_finder(4.5,8.2));
    return 0;
}