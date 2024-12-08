#include <stdio.h>
#include <string.h>
char line[100];
int num,count;
int power = 1,sum = 1;
int main(){
    printf("Please insert a number:");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &num);
    for(count = 2;count <= num;++count){
        for(int i = 1;i <= num;++i){
            power = power * count;
        }
        sum = sum + power;
        power = 1;
    }
    printf("%d", sum);
    return 0;
    }