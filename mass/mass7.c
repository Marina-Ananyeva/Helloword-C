#include <stdio.h>

int main() {//Найти среднее арифметическое элементов массива.
int i=0, mass [100]; 
double N, M=0;
scanf ("%lf", &N);

while (i<N) {scanf ("%d", &mass [i]); M=M+mass [i]; i++;}

printf ("%.2f ", M/N);

  return 0;
}