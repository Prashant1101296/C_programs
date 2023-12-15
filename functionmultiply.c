#include<stdio.h>
int multiply(int a,int b,int c)
{
  return a*b*c;  
}
int main()
{
    int result = multiply(200,50,10);
    printf("%d",result);
    return 0;
}