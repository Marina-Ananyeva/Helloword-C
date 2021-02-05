#include <stdio.h>

int main() {
 int N,F,F1,F2,b;
 scanf("%d",&N);
 F=1;
 F1=1;
 if (N==1||N==2)
 F2=1;
 else
 for (b=3;b<=N;b++)  
 {F2=F+F1;
 F=F1;
 F1=F2;}
 
 printf("%d",F2);
    return 0;
}