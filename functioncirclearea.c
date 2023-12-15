#include<stdio.h>
    float circlearea(float r){
        return 3.14*r*r;
    }
int main(){
float r;
printf("area of circle");
scanf("%f",&r);
float result= circlearea(r);
printf("%f",result);
return 0;
}
