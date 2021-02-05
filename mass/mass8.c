#include <stdio.h>

int main() {/*Разделить массив на две части, поместив в первую элементы, 
большие среднего арифметического массива, а во вторую — меньшие.*/
int i=0, N, M=0, mass [100]; 
scanf ("%d", &N);

while (i<N) {scanf ("%d", &mass [i]); M=M+mass [i]; i++; }

for (i=0; i<N; i++) 
    if (mass [i]>M/N) printf ("%d ", mass [i]);
                           
for (i=0; i<N; i++) 
    if (mass [i]<=M/N) printf ("%d ", mass [i]);

  return 0;
}