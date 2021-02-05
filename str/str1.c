#include <stdio.h>
int main(void) {
  char str[10];
  fgets(str, 10, stdin);
  fflush(stdin); // очищаем поток ввода
  puts(str);
  return 0;
}