#include <stdio.h>

int main() {//Посчитать значение NN-го числа Фибоначчи.
 int N,F=1,F1=1,F2,b;
 scanf("%d",&N);
 if (N<=0) F2=0;
 if (N==1||N==2) F2=1;
 for (b=3;b<=N;b++)  
 {F2=F+F1;
 F=F1;
 F1=F2;}
 printf("%d",F2);
    return 0;
}