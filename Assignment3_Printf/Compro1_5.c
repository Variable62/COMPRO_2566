#include <stdio.h>
int main()
{
    int M = 20599;
    printf("Jack Ma has been living in this world for %d years ", M/365);
    printf("%d months,",M/30);
    printf("and %d days.",M%365%30);
    return 0;
}