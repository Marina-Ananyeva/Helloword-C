#include <stdio.h>

int main() {//Для целого числа k ( 0 \le k \le 12)k(0≤k≤12) посчитать k!k!.
 int k,b,N=1;
 scanf("%d",&k);
 for (b=2;b<=k;b++)
 N=N*b;
 printf("%d",N);
    return 0;
}