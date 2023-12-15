#include<stdio.h>
float SI (float amount, float rate,float time){
    return amount*rate*time/100 ;
}
int main (){
    float simpleintrest= SI(2000.00,4.5,2.1);
    printf("%f",simpleintrest);
    return 0;
}