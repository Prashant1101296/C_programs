#include<stdio.h>
int main(){
    char name[25];
    scanf("%s",name);
    for(int i=0;i<10;i++)
    {
        printf("%d - %s\n",i+1,name);
    } return 0;
}