#include <stdio.h>

int main() {
  
  char yourName[30] ;
  char end[10] = "END";
  
   

  do {
    
    scanf("%s", &yourName);

    if (yourName[30] == end[10]) {

    printf("Done"); 

  }

  else{
    
     printf("%s\n", yourName);
  }

  }

 while (yourName[30] == end[10]);
  



    return 0;
}