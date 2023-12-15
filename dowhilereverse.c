#include <stdio.h>

int main() {
  int n = 10;
  int i=0;
  
  do {
    
        if(i%2==0)
    {
    printf("%d\n", i);
    }
    i++;
  }
  while (i!= n);
  
  return 0;
}