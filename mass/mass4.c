#include <stdio.h>

int main() {//Вывести сначала чётные элементы массива, а затем нечётные.
int N, i;
int mass [100];

scanf ("%d", &N);

for (i=0; i<N; i++) {
    scanf ("%d", &mass [i]);
    if (mass [i]%2==0) printf ("%d ", mass [i]); }
for (i=0; i<N; i++) {
    if (mass [i]%2!=0) printf ("%d ", mass [i]); }      

  return 0;
}