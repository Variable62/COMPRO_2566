#include <stdio.h>
int main(){
    int total=0;
    char text[]="The quick brown fox jump over the lazy dog";
    for(int i=0;i<=sizeof(text);i++)
    if(text[i]=='o')total++;
    
    printf("%d",total);
    return 0;
}