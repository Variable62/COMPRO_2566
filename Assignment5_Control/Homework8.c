#include <stdio.h>

int main()
{
    int t;
    char data[100];

    printf("Please enter a number: ");
    fgets(data,sizeof(data),stdin);
    sscanf(data,"%d",&t);

    switch (t < 0) {
    case 1:
    printf("%d is negative\n", t);
    break;

    case 0:
    if (t == 0) {
    printf("%d is zero\n", t);
    } else {
    printf("%d is positive\n", t);
    }

    break;
    
    }
    return 0;
}