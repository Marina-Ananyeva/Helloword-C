#include <stdio.h>

int main() {//Необходимо найти максимальный и минимальный элемент последовательности, неизвестной длины
int num, max, min;
max=-9999;
min=9999;
scanf ("%d", &num);    
while (num!=0) {
if (num>max) max=num;
if (num<min) min=num;
scanf ("%d", &num);    
}
printf ("%d %d", max, min);

return 0;
}