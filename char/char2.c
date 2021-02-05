#include <stdio.h>

int main(void){
  
  char k = 0;

  for(int i = 0; i < 256; i++){
    k = i;
    printf("k = %d\n", k);
  }

  return 0;
}