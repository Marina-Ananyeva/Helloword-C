#include <stdio.h>

int main() {/*Для заданной квадратной матрицы A[N] посчитать следующие величины:
- сумму элементов, находящихся над главной диагональю
- сумму элементов, расположенных под побочной диагональю*/
int N, i, j, a=0, b=0;
int mass [10][10];
scanf ("%d", &N);
for (i=0; i<N; i++) {
for (j=0; j<N; j++) {
    scanf ("%d", &mass [i][j]);
    if (j>i) {a=mass [i][j]+a;}
    if (i+j>=N) {b=mass [i][j]+b;}}}

printf ("%d %d", a>=b? b:a, b<a? a:b);
    
  return 0;
}