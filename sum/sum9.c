#include <stdio.h>
#include <math.h> 
int main (void) {//вычисление расстояния между точками на оси координат
   int a,b;
   double c;
    scanf ("%d", &a);
    scanf ("%d",&b);
    c=a-b;

    printf("%.0f\n",fabs(c));

    

return 0;
}



