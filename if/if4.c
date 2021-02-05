#include <stdio.h>

int main() {//вывести все натуральные числа из промежутка
    int K,M;
   scanf ("%d %d",&K,&M);
   
    if(K<=0) K=1;
    else K=K;
    for (K;K<=M;K++) 
        printf("%d ",K);
    
    return 0;
}