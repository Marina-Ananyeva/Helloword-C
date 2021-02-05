#include <stdio.h>

int main() {//Для заданной матрицы вывести на экран транспонированную матрицу.
int N, M, i, j;
scanf ("%d %d", &N, &M);

int mass [10] [10];
    
for (i=0; i<N;i++) {
    for (j=0; j<M; j++) scanf ("%d", &mass [i] [j]);};
    
for (i=0; i<M;i++) {
    for (j=0; j<N; j++) {printf ("%d ", mass [j] [i]);}
    printf ("\n");}   
    
  return 0;
}