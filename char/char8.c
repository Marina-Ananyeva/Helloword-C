#include <stdio.h>

int main() {//Вывести на экран KK символ латинского алфавита в верхнем и нижнем регистре.
int K;
scanf ("%d", &K);
printf ("%c%c\n", 64+K, 64+K+32);
  return 0;
}