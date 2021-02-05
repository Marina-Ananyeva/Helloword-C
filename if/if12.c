#include <stdio.h>

int main() {//Для заданного числа NN проверить, является ли оно простым.
    int N,d,a=1;
    scanf("%d",&N);
    for (d=1;d<=N;d++)
    if (N%d==0&&d!=N&&d!=1) a=0;
 printf("%d",a);
    return 0;
}