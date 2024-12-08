#include <stdio.h>
int main()
{
    int t,a;
    int comparison;
    char data[100];
    char data1[100];
    printf("Please enter a first number :");fgets(data,sizeof(data),stdin);
    sscanf(data,"%d",&t);
    printf("Please enterr a second number :");fgets(data1,sizeof(data1),stdin);
    sscanf(data1,"%d",&a);

    if (t < a) {
        comparison = -1;
    } else if (t > a) {
        comparison = 1;
    } else {
        comparison = 0;
    }

    switch (comparison) {
    case -1:
    printf("%d is less than %d\n", t, a);
    break;

    case 0:
    printf("%d and %d are equal\n", t, a);
    break;

    case 1:
    printf("%d is more than %d\n", t, a);
    break;
    
    default:
    printf("Invalid comparison\n");
    break;
    }
    return 0;
}