#include <stdio.h>
#include <math.h>

int main() {//Напишите программу, которая по данному натуральному NN печатает его цифры в обратном порядке.
int N,a,b=1;
scanf ("%d", &N);
 while (b!=0) {
    a=N%10;
    printf ("%d", a);
    b=N/10;
    N=ceil(b);}
     return 0;
}