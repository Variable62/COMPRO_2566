#include <stdio.h>
#include <string.h>
char num[100];

int main()
{
    char matrix[3][3];

    printf("A1,1 is ");
    fgets(num,sizeof(num), stdin);
    sscanf(num,"%d",&matrix[0][0]);

    printf("A1,2 is ");
    fgets(num,sizeof(num), stdin);
    sscanf(num,"%d",&matrix[0][1]);

    printf("A1,3 is ");
    fgets(num,sizeof(num), stdin);
    sscanf(num,"%d",&matrix[0][2]);

    printf("A2,1 is ");
    fgets(num,sizeof(num), stdin);
    sscanf(num,"%d",&matrix[1][0]);

    printf("A2,2 is ");
    fgets(num,sizeof(num), stdin);
    sscanf(num,"%d",&matrix[1][1]);

    printf("A2,3 is ");
    fgets(num,sizeof(num), stdin);
    sscanf(num,"%d",&matrix[1][2]);

    printf("A3,1 is ");
    fgets(num,sizeof(num), stdin);
    sscanf(num,"%d",&matrix[2][0]);

    printf("A3,2 is ");
    fgets(num,sizeof(num), stdin);
    sscanf(num,"%d",&matrix[2][1]);

    printf("A3,3 is ");
    fgets(num,sizeof(num), stdin);
    sscanf(num,"%d",&matrix[2][2]);
    
    printf("The matrix A is\n%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n",matrix[0][0],matrix[0][1],matrix[0][2],matrix[1][0],matrix[1][1],matrix[1][2],matrix[2][0],matrix[2][1],matrix[2][2]);
 
    int a = (matrix[0][0]*matrix[1][1]*matrix[2][2])+(matrix[0][1]*matrix[1][2]*matrix[2][0])+(matrix[0][2]*matrix[1][0]*matrix[2][1]);
    int b = (matrix[2][0]*matrix[1][1]*matrix[0][2])+(matrix[2][1]*matrix[1][2]*matrix[0][0])+(matrix[2][2]*matrix[1][0]*matrix[0][1]);
    printf("The determinant of matrix is %d",a-b);
    return 0;
}