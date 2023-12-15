#include<stdio.h>
float volumehemisphere(float r,float h){
    return 3.14*r*r*r/h;
}
int main(){
    float r;
    float h;
    printf("volumehemisphere \n ");
    scanf("%f %f",&r,&h);
    float result=volumehemisphere( r, h);
    printf("%f" ,result);
    return 0;

}

