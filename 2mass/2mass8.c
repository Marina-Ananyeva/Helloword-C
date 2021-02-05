#include <stdio.h>

int main() {//Поменять местами столбцы с минимальной и максимальной суммой элементов.
int N, M, i, j, a=0, b=-99999, c=99999, k=0, k1=0, d=0;
int mass [10][10];
scanf ("%d", &N);
scanf ("%d", &M); 
    
for (i=0; i<N; i++) {
for (j=0; j<M; j++) {scanf ("%d", &mass [i][j]);}}

for (j=0; j<M; j++) {
    a=0;
for (i=0; i<N; i++) {
    a=mass [i][j]+a;}
if (a>b) {b=a; k=j;}
if (a<c) {c=a; k1=j;}}

for (i=0; i<N; i++) {
    d=mass [i][k1];
    mass [i][k1] = mass [i][k];
    mass [i][k] = d;
for (j=0; j<M; j++) {
    printf ("%d ", mass [i][j]);}
    printf ("\n");}
 
  return 0;
}