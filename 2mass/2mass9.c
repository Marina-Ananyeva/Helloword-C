#include <stdio.h>

int main() {
int N, K, i, j, d;
int mass [10][10]={0};

scanf ("%d", &N);
for (i=0; i<N; i++) {
    for (j=0; j<N; j++) scanf ("%d", &mass[i][j]);}
scanf ("%d", &K);

for (d=0; d<K; d++) {
    for(i=N-1; i>=0; i--) {
        int tmp = mass [i][N-1];
    for (j=N-1; j>=0; j--) {
        mass [i][j] = mass [i][j-1];}
        mass [i][0]= tmp;}}   
    
for (i=0; i<N; i++) {
    for (j=0; j<N; j++) 
        printf ("%d ", mass [i][j]);
        printf ("\n");}    
 
  return 0;
}