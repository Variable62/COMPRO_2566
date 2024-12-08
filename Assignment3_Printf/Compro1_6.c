#include <stdio.h>

int main()
{
    int t = 973/100;
    int h = (973%100)/50;
    int a = (973%100)%50/20;
    int n = (973%100)%50%20/10;
    int v = (973%100)%50%20%10/5;
    int x = (973%100)%50%20%10%5/1;
    printf("%d one hundred Baht banknotes\n",t);
    printf("%d fifty Baht banknotes\n",h);
    printf("%d twenty Baht banknotes\n",a);
    printf("%d ten Baht coins\n",n);
    printf("%d five Baht coins\n",v);
    printf("%d one Baht coins needed to be returned",x);
    return 0;
    }