#include <stdio.h>

int main() {//Вывести через пробел все целые числа из промежутка в обратном порядке
    int A,B;
   scanf ("%d %d",&A,&B);
   
    for (B;B>=A;B--) 
    printf("%d ",B);
    
    return 0;
}