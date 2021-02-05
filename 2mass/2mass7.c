#include <stdio.h>

int main() {//Для заданной матрицы посчитать сумму элементов каждого столбца.
int N, M, i, j, a=0;
int mass [10][10];
scanf ("%d", &N);
scanf ("%d", &M); 
    
for (i=0; i<N; i++) {
for (j=0; j<M; j++) {
    scanf ("%d", &mass [i][j]);}}
     
for (j=0; j<M; j++) {
    a=0;
for (i=0; i<N; i++) {a=mass [i][M-j-1]+a;}
    printf ("%d ", a);}
  return 0;
}