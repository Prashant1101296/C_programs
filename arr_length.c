#include<stdio.h>
int main(){
    int arr[]={10,20,30,40};
    int length = sizeof(arr)/ sizeof(arr[0]);
    printf("%d",length);
    return 0;

}