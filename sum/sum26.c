#include <stdio.h>
#include <math.h>
int main() {//Перевести число из двоичной системы в десятичную

    int a,a1,a2,a3,a4,e;
   scanf("%d",&a);
a1=a/1000;
a2=(a/100)-a1*10;
a3=(a/10)-a1*100-a2*10;
a4=a%10;

    e=a4*pow(2,0)+a3*pow(2,1)+a2*pow(2,2)+a1*pow(2,3);
    printf("%d\n", e);// put your code here
  return 0;
}