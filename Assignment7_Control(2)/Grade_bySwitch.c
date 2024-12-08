#include <stdio.h>
#include <string.h>

char line[300];
int calculas, physics, mechanic, chemistry;
int calculas_credit = 3, physics_credit = 3, mechanic_credit = 3, chemistry_credit = 3;
float total_gpa;

int main() {
    printf("Please enter calculus score: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &calculas);

    printf("Please enter physics score: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &physics);

    printf("Please enter mechanic score: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &mechanic);

    printf("Please enter chemistry score: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &chemistry);

    int calculas_gpa, physics_gpa, mechanic_gpa, chemistry_gpa;

    switch (calculas / 10) {
        case 10:
            calculas_gpa = 4;  
            break;
        case 9:
            calculas_gpa = 4;
            break;
        case 8:
            calculas_gpa = 3;
            break;
        case 7:
            calculas_gpa = 2;
            break;
        case 6:
            calculas_gpa = 1;
            break;
        default:
            calculas_gpa = 0;
    }

    switch (physics / 10) {
        case 10:
        case 9:
            physics_gpa = 4;
            break;
        case 8:
            physics_gpa = 3;
            break;
        case 7:
            physics_gpa = 2;
            break;
        case 6:
            physics_gpa = 1;
            break;
        default:
            physics_gpa = 0;
    }

    switch (mechanic / 10) {
        case 10:
        case 9:
            mechanic_gpa = 4;
            break;
        case 8:
            mechanic_gpa = 3;
            break;
        case 7:
            mechanic_gpa = 2;
            break;
        case 6:
            mechanic_gpa = 1;
            break;
        default:
            mechanic_gpa = 0;
    }

    switch (chemistry / 10) {
        case 10:
        case 9:
            chemistry_gpa = 4;
            break;
        case 8:
            chemistry_gpa = 3;
            break;
        case 7:
            chemistry_gpa = 2;
            break;
        case 6:
            chemistry_gpa = 1;
            break;
        default:
            chemistry_gpa = 0;
    }

    total_gpa = ((calculas_gpa * calculas_credit) + (physics_gpa * physics_credit) +
                 (mechanic_gpa * mechanic_credit) + (chemistry_gpa * chemistry_credit)) / 12.0;

    printf("GPAX is %.2f\n", total_gpa);
    return 0;
}