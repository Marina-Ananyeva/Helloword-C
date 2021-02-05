#include <stdio.h>

int main() {/*Напишите программу, выводящую на экран все элементы массива, которые меньше последнего элемента и 
больше первого элемента массива*/
int N, i=0, j=0, r=0;
int mass [100];

scanf ("%d", &N);

while (i<N) {scanf ("%d", &mass [i]); i++;}
while (j<N) {
        if (mass [j]<mass [N-1]&&mass [j]>mass [0]) {
            printf ("%d ", mass [j]); r++;}
        j++;}

if (r==0) printf ("0 ");
  
  return 0;
}