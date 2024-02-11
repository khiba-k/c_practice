#include <stdio.h>

int main() {
  
  int myNum[4];
  scanf("%d", &myNum[0]);
  scanf("\n%d", &myNum[1]);
  scanf("\n%d", &myNum[2]);
  scanf("\%d", &myNum[3]);
  

  printf("%d\n\n", myNum[0]);
  printf("%d\n\n", myNum[1]);
  printf("%d\n\n", myNum[2]);
  printf("%d\n\n", myNum[3]);

 
  return 0;

}