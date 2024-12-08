#include <stdio.h>
int main(int argc, char const *argv[])
{
    char line[3][2][500];
    char full[200];
    char full1[200];
    char full2[200];

    printf("First Student Name : ");
    fgets(line[0][0],sizeof(line[0][0]), stdin);
    line[0][0][strlen(line[0][0])-1] = '\0';

    printf("Family Name : ");
    fgets(line[0][1],sizeof(line[0][1]), stdin);
    line[0][1][strlen(line[0][1])-1] = '\0';

    strcpy(full,line[0][0]);
    strcat(full, " ");
    strcat(full,line[0][1]);

    printf("Second Student Name : ");
    fgets(line[1][0],sizeof(line[1][0]), stdin);
    line[1][0][strlen(line[1][0])-1] = '\0';
    
    printf("Family Name : ");
    fgets(line[1][1],sizeof(line[1][1]), stdin);
    line[1][1][strlen(line[1][1])-1] = '\0';

    strcpy(full1,line[1][0]);
    strcat(full1, " ");
    strcat(full1,line[1][1]);

    printf("Third Student Name : ");
    fgets(line[2][0],sizeof(line[2][0]), stdin);
    line[2][0][strlen(line[2][0])-1] = '\0';
    
    printf("Family Name : ");
    fgets(line[2][1],sizeof(line[2][1]), stdin);
    line[2][1][strlen(line[2][1])-1] = '\0';

    strcpy(full2,line[2][0]);
    strcat(full2, " ");
    strcat(full2,line[2][1]);

    printf("Our classroom has three studdents\n 1.%s\n 2.%s\n 3.%s",full,full1,full2);
    return 0;
}
