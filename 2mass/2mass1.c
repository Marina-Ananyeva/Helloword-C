#include <stdio.h>

int main() {//Вывести элементы двумерного массива (матрицы) на экран.
int N, M, i, j;
int mass [10] [10];

scanf ("%d %d", &N, &M);

for (i=0; i<N; i++) {
    for (j=0; j<M; j++) {
        scanf ("%d", &mass [i] [j]);
        printf ("%d ", mass [i] [j]);}
    printf ("\n");}   
    
  return 0;
}