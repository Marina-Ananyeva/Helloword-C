#include <stdio.h>
#include <math.h> 
int main (void) {//вычисление площади треугольника
 double a,b,c,d,e,f,h,res;
    scanf ("%lf%lf%lf%lf%lf%lf%lf", &a,&b,&c,&d,&e,&f,&h);
    
res = (a)/((b)*((c)/((d)*((e)/(f*h)))));  
  printf("%.2f\n", res);

return 0;
}



