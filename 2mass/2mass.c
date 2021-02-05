#include <stdio.h>

int main(void) {//заполнение массива с 1 числами подряд и вывод массива

  int arr[4] [8];
  int k = 1, N;

scanf ("%d", &N);

  for (int i = 0; i < N; i = i + 1){
    for(int j = 0; j < N; j = j + 1){
      arr[i][j] = k;
      k=k+1;  
    }
  }

  for (int i = 0; i < N; i = i + 1){
    for(int j = 0; j < N; j = j + 1){
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}