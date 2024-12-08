#include <stdio.h>
#include <string.h>
char line[300];
int prime_number(int num){
        if(num <= 1){
            return 0;
        }
        for(int i = 2;i * i <= num;i++){
            if(num%i == 0){
            return 0;
        }
    }
        return 1;
    }
int main()
{
   int a; 
    printf("Please enter a number:");
    fgets(line, sizeof(line), stdin);
    sscanf(line,"%d", &a);

    if(prime_number(a)){
        printf("%d is a prime number.\n", a);
    }else{
        printf("%d is not a prime number", a);
    }
    return 0;
}