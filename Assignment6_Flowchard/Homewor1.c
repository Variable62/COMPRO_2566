#include <stdio.h>
int main() {
    int x = 7;
    int y = 9;

    if (x == y) {
        x = x + 1;
    } else {
        x = y * 7;
    }

    y = y + 7;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}