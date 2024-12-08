#include <stdio.h>
#include <string.h>
int main()
{
    char sentence[300];
    char word[100];
    int a=0,b=0;
    printf("Please enter a sentence:");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strlen(sentence)-1] = ' ';
    for(int i = 0; i <= strlen(sentence); i++){
        if(sentence[i] != ' '){
            a++;
        }
    else{
        if(a>b){
    b=a;
    for(int max = 0; max < b;max++){
        word[max] = sentence[i - a + max];
    }
        }
        a=0;
    }
    }
    printf("The longest word is %s\n",word);
    return 0;
}