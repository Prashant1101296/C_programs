#include<stdio.h>
int main(){

    int AtmPIN[3]={1234,9812,0027};
    int*hacker=&AtmPIN[2];
    printf("beforehack%d",AtmPIN[2]);
    *hacker=1111;
    printf("afterhack%d", AtmPIN[2]);
    return 0;

    }
