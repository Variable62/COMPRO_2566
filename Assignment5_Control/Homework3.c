#include<stdio.h>
#include<string.h>

int main(){
    int num1;
    int num2;
    char opration;

    printf("Please enter a number: ");
    scanf("%d",&num1);
    printf("Operation: ");
    scanf(" %c",&opration);

    printf("Please enter another number: ");
    scanf("%d",&num2);
    
    if(opration=='+')printf("%d+%d = %d",num1,num2,num1+num2);
    else if(opration=='-')printf("%d-%d = %d",num1,num2,num1-num2);
    else if(opration=='x')printf("%dx%d = %d",num1,num2,num1*num2);
    else if(opration=='/')printf("%d/%d = %d",num1,num2,num1/num2);
    
    return 0;
}