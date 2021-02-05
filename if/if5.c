#include <stdio.h>

int main() {//вывести все натуральные числа из промежутка и  их количество
    int K,M,a=0;
   scanf ("%d %d",&K,&M);
   
    if(K<=0) K=1;
    
    for (K;K<=M;K++) {
        printf("%d ",K);
    a=a+1;}
    printf("\n%d",a);
    return 0;
}