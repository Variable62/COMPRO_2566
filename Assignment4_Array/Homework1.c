#include <stdio.h>
#include <string.h>
int main (){
    float a;
    char line[100];
    float b;
    printf("Please enter a numbner: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%f",&a);

    printf("Divided by: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%f",&b);
    printf("Calculation result is: %.3f",a/b);
    return 0;
}