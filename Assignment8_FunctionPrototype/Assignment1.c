#include <stdio.h>
#include <string.h>
char line[200];
int sum = 1;
int Function_Power(int a, int b){
    for(int i = 1;i<= b;i++){
    sum = sum*a;
    }
    return (sum);
}
int main()
{
    int t,h;
    printf("Please enter a number:");fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &t);

    printf("Power by:");fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &h);

    printf("%d to the power of %d is %d", t, h,Function_Power(t,h));
    return 0;
}
