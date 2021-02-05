#include <stdio.h>
#include <math.h>

int main() {//По заданному NN вывести через пробел все (натуральные, т.е. 1, 2, 3, \dots1,2,3,… ) степени числа 2
int N,i=1;
    scanf ("%d", &N);
while (N>=pow(2,i)) {
    printf ("%d ",i);
    i++;}
  return 0;
}