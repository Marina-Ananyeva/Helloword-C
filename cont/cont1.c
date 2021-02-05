#include <stdio.h>

int main() {//Вывести положительные члены последовательности чисел, поступившей на вход.
int a=1;
    
while (a!=0) {
    scanf ("%d ", &a);
    if (a>0) printf ("%d ", a);
}
  
  return 0;
}