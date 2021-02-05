#include <stdio.h>

int main() {//Написать программу для подсчёта различных символов, которые поступают на вход.
int N, d, i, k=0;
scanf ("%d", &N);
char ch, mass [100];
for (i=0; i<N; i++) {
    scanf (" %c", &mass [i]);}
for (d=0; d<26; d++) { 
    for (i=0; i<N; i++) {
    if (mass [i]==65+d||mass [i]==65+32+d) k=k+1;}
    printf ("%d ", k);
    k=0;}
    return 0;
}