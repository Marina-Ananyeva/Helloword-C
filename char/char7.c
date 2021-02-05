#include <stdio.h>

int main() {//Определить тип символа.
char ch;
scanf ("%c", &ch);
printf (48<=ch&&ch<=57 ? "digit": (65<=ch&&ch<=90)||(97<=ch&&ch<=122) ? "en":"error");
  return 0;
}