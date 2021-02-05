#include <stdio.h>

int main(void){
  int arr[100] = {0};
  
  for(int i = 0; i < 100; i = i + 1){
    arr[i] = 2*i;
  }

  for(int i = 0; i < 100; i = i + 1){
    printf("%d\t",arr[i]);
  }

  return(0);
}