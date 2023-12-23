#include<stdio.h>
int main(){
int n;
int sum;
printf("enter the length\n");
scanf("%d",&n);
int arr[n];
printf("enter the element of array\n");
for(int i=0;i<n;i++) 
{scanf("%d",&arr[i]);
// printf("%d",i);
}
for(int i=0;i<n;i++) 
{printf("%d ",arr[i]);
// printf("%d",i);
}
for(int i=0;i<n;i++) 
{
    printf("%d ",arr[i]
);
sum += arr[i];
// printf("%d",i);
}
return 0;
}