#include <stdio.h>
int main(){
    int t[3][3];
    int a,b;
    for(a=0;a<3;a++){
    for(b=0;b<3;b++){
    printf("Please input A%d,%d",a,b);
    scanf("%d",&t[a][b]);
    }
    }
    if(t[0][0]+t[0][1]+t[0][2]==1){
    if(t[1][0]+t[1][1]+t[1][2]==1){
    if(t[2][0]+t[2][1]+t[2][2]==1){
    if(t[0][0]+t[1][0]+t[2][0]==1){
    if(t[0][1]+t[1][1]+t[2][1]==1){
    if(t[0][2]+t[1][2]+t[2][2]==1)printf("Matrix A is identity matrix.");
    else printf("Matrix A is not identity matrix.");
    }else printf("Matrix A is not identity matrix.");
    }else printf("Matrix A is not identity matrix.");
    }else printf("Matrix A is not identity matrix.");
    }else printf("Matrix A is not identity matrix.");
    }else printf("Matrix A is not identity matrix.");
    return 0;
}