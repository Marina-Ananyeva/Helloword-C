#include <stdio.h>
#include <math.h> 
int main (void) {//вычисление расстояния между точками на осях координат
   double x1,y1,x2,y2,s;
    scanf ("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
   s=sqrt ((pow((x1-x2),2)) + (pow((y1-y2),2)));
    printf("%.2f\n",s);
   

return 0;
}



