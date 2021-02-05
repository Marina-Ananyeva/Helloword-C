#include <stdio.h>

int main() {//Экспонента с заданной точностью
double e,a=1,b=1;
int i=1;
scanf ("%lf", &e);
while (1/b>=e) {
    b=b*i;  
    a=a+(1/b);
    i++;}
printf ("%.8f",a);
  return 0;
}