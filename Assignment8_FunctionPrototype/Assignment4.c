#include <stdio.h>
#include <math.h>
char line[300];
int data;
float sum = 1;
float square_root(int num){
    for(int i = 1;i <= num;i++){
    sum = pow(num,0.5);
}
   return sum;
}
int main()
{
    printf("Please enter an integer:");
    fgets(line, sizeof(line), stdin);
    sscanf(line,"%d", &data);

    printf("square root of %d is %.5f ", data, square_root(data));
    return 0;
}