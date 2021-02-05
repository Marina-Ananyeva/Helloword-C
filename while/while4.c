#include <stdio.h>

int main() {//Сумма элементов последовательности. Вычислить сумму элементов последовательности, неизвестной длины.
int num, sum=0;
do {
scanf ("%d", &num);
sum=sum+num;}
while (num!=0);
printf ("%d", sum);  
return 0;
}