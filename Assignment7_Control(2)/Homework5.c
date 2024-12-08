#include <stdio.h>
#include <string.h>
int main(){
    char sentence[300];
    int a;

    printf("Please enter a sentence:");
    fgets(sentence, sizeof(sentence), stdin);

    for(int i = 0; i < sizeof(sentence); i++)
    if(sentence[i] == 't' && sentence[i+1] == 'h' && sentence[i+2] == 'e')
    a++;
    printf("The have %d times", a);
    return 0;
}