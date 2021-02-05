#include <stdio.h>

int main(void) {//По заданному числу N сформировать матрицу (N×N) следующего вида:

int N, k, i, j;
int mass[10][10];
    
scanf ("%d", &N);

for (i=0; i<N; i++){
    if (i==0||i%2==0) {
        k=1;  
        for(j=0; j<N; j++){
            mass[i][j] = k;
            k=k+1;}}
    if (i%2!=0) {
        k=N;  
        for(j=0; j<N; j++){
            mass[i][j] = k;
            k=k-1;}}
  }
for (i=0; i<N; i++){
    for(j=0; j<N; j++){
      printf("%d ", mass[i][j]);}
    printf("\n"); }

  return 0;
}