#include <stdio.h>
#include <math.h>
int main() {//перевод температуры из градусов Фаренгейта в градусы Цельсия

    double F, C;
   scanf("%lf",&F);
    C=(F-32)*5/9;
    printf("%.2lf\n", C);// put your code here
  return 0;
}