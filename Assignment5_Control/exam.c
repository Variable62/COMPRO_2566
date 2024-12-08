#include <stdio.h>
#include <string.h>
char choose[5];
int DATA;
int main(int argc, char const *argv[])
{
    printf("Where are you go to night: ");
    fgets(choose, sizeof(choose), stdin);
    sscanf(choose, "%c", &DATA);
    switch (DATA){
    case '1':
    printf("SOCIETY");
        break;
    case '2':
    printf("POOL");
    break;
    case '3':
    printf("ME SMILE");
    break;
    default:
    printf("I want to sleep");
        break;
    }
    return 0;
}




