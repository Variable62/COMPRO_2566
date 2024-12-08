#include <stdio.h>
int main()
{
    int data [5];
    int total;
    int average;
    data[0] = 10;
    data[1] = 10;
    data[2] = 10;
    data[3] = 10;
    data[4] = 10;
    total = data[0]+data[1]+data[2]+data[3]+data[4];
    average = total/5;
    printf("Sum1 %d Sum2 %d",total,average);
    return 0;
}