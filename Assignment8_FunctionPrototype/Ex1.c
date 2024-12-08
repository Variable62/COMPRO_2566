#include <stdio.h>
int main(){
    int counter;
    for (counter = 0; counter < 3; counter++)
    {
        int temporaly = 0;
        static int peramanent = 1;
        printf("Temporaly %d\t Permanent %d\n", temporaly, peramanent);
        ++temporaly;
        ++peramanent;
    }
    return 0;
}