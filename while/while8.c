#include <stdio.h>
#include <math.h>

int main() {//Подсчитать количество цифр в записи натурального числа NN.
int N,a=1,i=1;
scanf("%d", &N);
while (a>=1) {
    a=N/pow(10,i);
    i++;}
printf ("%d",(i-1));
return 0;
}