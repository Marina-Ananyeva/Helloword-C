#include <stdio.h>

int main(void) {//Змейка. Для заданных чисел M и N сформировать матрицу, заполненную по спирали числами от 1 до M*N.

int mass[10] [10]={0};
int k = 1, N, M, i, j, d, c;

scanf ("%d%d", &N, &M);

if (M<=N) c = M;
if (N<=M) c = N;

for (d=0; d<c; d++) { 
     for(int i=d, j = d; j < M-d&&k<=N*M; j++){
      mass[i][j] = k;
      k=k+1;}
     for(int i=d+1, j = M-d-1; i < N-d&&k<=N*M; i++){
      mass[i][j] = k;
      k=k+1;}
     for(int i=N-d-1, j = M-d-2; j >=d&&k<=N*M; j--){
      mass[i][j] = k;
      k=k+1;}
     for(int i=N-d-2, j = d; i>d&&k<=N*M; i--){
      mass[i][j] = k;
      k=k+1;}}
    
for (int i = 0; i < N; i++){for(int j = 0; j < M; j++){
     printf("%3d", mass[i][j]);}
     printf("\n");}

  return 0;
}