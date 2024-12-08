#include <stdio.h>
#include <string.h>
char line[300];
char t;
int main()
{
    fgets(line, sizeof(line), stdin);
    sscanf(line," %c",&t);
    switch(t){
        case 'A' :
        printf("Vowels");
        break;

        case 'a' :
        printf("Vowels");
        break;

        case 'E' :
        printf("Vowels");
        break;

        case 'e' :
        printf("Vowels");
        break;

        case 'I' :
        printf("Vowels");
        break;

        case 'i' :
        printf("Vowels");
        break;

        case 'O' :
        printf("Vowels");
        break;

        case 'o' :
        printf("Vowels");
        break;

        case 'U' :
        printf("Vowels");
        break;

        case 'u' :
        printf("Vowels");
        break;

        default:
        printf("not Vowels");
    }
    return 0;
}