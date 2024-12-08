#include <stdio.h>
#include <string.h>

char line[300];
int num[5];
int max, min;
int GCD, LCM, i;

int main() {
    printf("Please enter five numbers: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
    max = min = num[0];

    for (i = 1; i < 5; i++) {
        if (num[i] > max) max = num[i];
        if (num[i] < min) min = num[i];
    }

    // Find LCM
    for (i = max; i >= 1; i++) {
        if (i % num[0] == 0 && i % num[1] == 0 && i % num[2] == 0 && i % num[3] == 0 && i % num[4] == 0) {
            LCM = i;
            break;
        }
    }

    // Find GCD
    for (i = min; i >= 1; i--) {
        if (num[0] % i == 0 && num[1] % i == 0 && num[2] % i == 0 && num[3] % i == 0 && num[4] % i == 0) {
            GCD = i;
            break;
        }
    }

    printf("LCM is %d\nGCD is %d", LCM, GCD);

    return 0;
}