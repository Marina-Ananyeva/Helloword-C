#include <stdio.h>

int main() {//Вывести соседние символы в таблице ASCII.
char ch;
scanf ("%c", &ch);
printf ("%c %c", ch-1, ch+1);
  return 0;
}