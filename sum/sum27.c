#include <stdio.h>
#include <math.h>
int main() {//Перевести число из к-чной системы в десятичную

    int a1,a2,a3,a4,k,e;
    scanf("%d",&k);
    scanf("%1d%1d%1d%1d",&a1,&a2,&a3,&a4);
   
    e=a4*pow(k,0)+a3*pow(k,1)+a2*pow(k,2)+a1*pow(k,3);
    printf("%d\n", e);// put your code here
  return 0;
}