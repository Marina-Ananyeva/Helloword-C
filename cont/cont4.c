#include <stdio.h>

int main() {//Вывести все различные элементы последовательности, упорядоченные по возрастанию.

int N, a=0, b=0, i=0;
    scanf ("%d", &N);
    
for (i; i<N; i++) {
    a=b;
    scanf ("%d", &b);
    if (b!=a) printf ("%d ", b); }   

  return 0;
}