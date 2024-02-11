#include <stdio.h>

int main() {

  int x;
  int y;
  
  printf("Enter x coordinate here:\n");
  printf("X:");
  scanf("%d", &x);
  
  printf("Enter y coordinate here:\n");
  printf("Y:");
  scanf("%d", &y);

  if (x > 0 & y > 0) {
    printf("It's in the first quadrant");
  }

  else if (x < 0 & y > 0) {
    printf("It's in the second quadrant");
  }

  else if (x < 0 & y < 0) {
    printf("It's in the third quadrant");
  }

  else {
    printf("It's in the fourth quadrant");
  }
  
return 0;




}