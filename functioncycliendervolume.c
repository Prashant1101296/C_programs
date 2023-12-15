#include<stdio.h>
float volumecycliender(float r, float h ) {
        return 3.14*r*r*h;
}
int main(){
    float r;
    float h;
    printf("volume of cycliender \n");
    scanf("%f %f", &r,&h);
    float result = volumecycliender(r,h);
    printf("%f",result);
    return 1;
}