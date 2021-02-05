#include <stdio.h>

int main() {//Сумму всех элементов последовательности, которые расположены между двумя нулями.
int a, b=0;

while (a!=-9999) {
    scanf ("%d", &a);
    if (a!=0) continue;
    if (a==0) {
            while (a!=-9999) {
            scanf ("%d", &a);
            if (a==0) break;
            else b=b+a;}}
     break;}
 printf ("%d", b);   
        
  return 0;
}