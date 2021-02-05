#include <stdio.h>

int main() {//Определить является ли массив палиндромом, т.е. первый элемент равен последнему, второй предпоследнему и т.д.
int N, k, i, mass [100];
scanf ("%d", &N);

for (int i=0; i<100; i++) {
scanf ("%d", &mass [i]);}
   
for (int i=0; i<N/2; i++) {
        if (mass[i]!=mass[N-i-1]) {printf ("NO"); k=0; break;}
        else k=1;}

if  (k==1) printf ("YES");
    return 0;
}