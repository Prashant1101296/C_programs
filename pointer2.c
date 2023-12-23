#include<stdio.h>
int main()
{

    int bank =2169200;
    int * hacker= &bank;
    *hacker=0;
    printf("%d",bank);
    return 0;
}