#include<stdio.h>

int main(){
    int num;
    char data[]="even";
    printf("Please enter a number :");
    scanf("%d",&num);

    if(num%2!=0)strcpy(data,"odd");  

    if(num>0){
        printf("%d is positive %s number.",num,data);
    }else if (num==0){
        printf("%d is zero %s number.",num,data);
    }else {
        printf("%d is negative %s number.",num,data);
    }
    return 0;
}