#include <stdio.h>
int main(){
    int matrix[3][3];
    int max=200;
    int min=389;
    int a,b;
    for (a=0;a<3;a++){
        for(b=0;b<3;b++){
            printf("Please input A%d,%d: ",a,b);
            scanf("%d",&matrix[a][b]);

            if(matrix[a][b]>max)max=matrix[a][b];
            if(matrix[a][b]<min)min=matrix[a][b];
        }
    }
    printf("Maximun number in A is %d.",max);
    printf("\nMinimum number in A is %d",min);
    return 0;
}