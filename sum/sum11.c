#include <stdio.h>
#include <math.h> 
int main (void) {//вычисление площади треугольника
 double a,b,y,pi=3.141593,S;
    scanf("%lf%lf%lf",&a,&b,&y);
    y =  y*pi/180;
    S=0.5*a*b*sin(y);
    printf("%.2f\n",S);
   

return 0;
}



