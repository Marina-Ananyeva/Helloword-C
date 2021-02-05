#include <stdio.h>

int main() {//Для заданного числа n вывести все его делители и их количество на экран.
    int N,d,a,c=0;
    scanf("%d",&N);
    for (d=1;d<=N;d++){
    a=N%d;    
    if (a==0) printf("%d ",d);
   if (a==0) c=c+1;} 
    printf("\n%d",c);
 
    return 0;
}