#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float num,num1;
    float ans,ans1;
    char data[100];
    printf("a:");fgets(data,sizeof(data),stdin);
    sscanf(data,"%d",&a);
    
    printf("b:");fgets(data,sizeof(data),stdin);
    sscanf(data,"%d",&b);
    
    printf("c:");
    fgets(data,sizeof(data),stdin);
    sscanf(data,"%d",&c);

    num = b * b - 4.0*a*c;
    num1 = sqrt(num);
    ans = (-b+(num1))/2.0*a;
    ans1 = (-b-(num1))/2.0*a;
 switch ((num > 0) ? 1 : (num == 0) ? 0 : (num < 0) ? : -1 ) {
    case 1:
    {
        ans = (-b + num1) / (2.0 * a);
        ans1 = (-b - num1) / (2.0 * a);
        printf("x = %.2f, %.2f", ans, ans1);
        break;
            }
    case 0 :
    {
        ans = -b / (2.0 * a);
        printf("x = %.2f", ans);
        break;
    }
    case -1 :
    {
            printf("Root real");
            break;
    }
    return 0;
}}