#include<stdio.h>
void goodmorning()
{printf("good morning\n");}
void goodafternoon()
{printf("good afternon");}
void goodevening()
{printf("good evening");}
void goodnight(){
printf("good night");}
 int main(){
    int time;
    switch(time){
        case 8:
        goodmorning();
        break;
        case 12:
        goodafternoon();
        break;
        case 5:
        goodevening();
         break;
        default:
        goodnight();
           }
           
 }