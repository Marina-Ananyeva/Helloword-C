#include <stdio.h>
#include <math.h>
int main() {// перевод дюймов и футов в метры   
   int F, D;
    double M;
   scanf("%d%d",&F,&D);
    M=F*12*25.4/1000+D*25.4/1000;
    printf("%d\'%d\" = %.2fm.\n",F,D,M);// put your code here
  return 0;
}