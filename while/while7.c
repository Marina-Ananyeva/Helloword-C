#include <stdio.h>
#include <math.h>

int main() {//По данном числу NN определить, является ли оно степенью числа 22.
int N,i=0,a;
scanf ("%d", &N);
while (pow(2,i)<=N){
a=pow(2,i);
i++;}
printf (a==N?"YES":"NO");

  return 0;
}