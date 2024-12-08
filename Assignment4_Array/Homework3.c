#include <stdio.h>
#include <string.h>
char line[100];
char data[10];
int main()
{
    printf("Please enter number 1: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d",&data[0]);

    printf("Please enter number 2: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d",&data[1]);

    printf("Please enter number 3: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d",&data[2]);

    printf("Please enter number 4: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d",&data[3]);

    printf("Please enter number 5: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d",&data[4]);

    printf("Please enter number 6: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d",&data[5]);

    printf("Please enter number 7: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d",&data[6]);

    printf("Please enter number 8: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d",&data[7]);

    printf("Please enter number 9: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d",&data[8]);

    printf("Please enter number 10: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d",&data[9]);

    printf("The number are : %d,%d,%d,%d,%d,%d,%d,%d,%d,%d",data[0],data[1],data[2],data[3],data[4],data[5],data[6],data[7],data[8],data[9]);
    return 0;
}