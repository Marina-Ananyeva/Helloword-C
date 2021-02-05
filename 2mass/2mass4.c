#include <stdio.h>

int main() {//По заданному числу N сформировать матрицу (N×N) следующего вида:
int N, i, j, c;
int mass [100] [100]={0};
scanf ("%d", &N);

for (i=0;i<N; i++) {

for (j=0;j<N; j++) {   
    if (i==j) {mass [i][j]=1;}    
    if (mass [i][j]==1) {
        for (c=1; c<N; c++) mass [i][j+c]=c+1;}
    if (mass [i][j]==1&&i!=0) {
        for (c=1; c<N; c++) mass [i][j-c]=c+1;}        
        }}
    
for (i=0;i<N; i++) {
for (j=0;j<N; j++) {printf("%d ", mass[i][j]);}
    printf("\n"); }
    
  return 0;
}