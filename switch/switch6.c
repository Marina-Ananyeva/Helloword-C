#include <stdio.h>

int main() {
  float a,b;
  char c;
  scanf("%f %f %c",&a,&b,&c);
  switch (c){
  case '+':printf("%.2f\n", a+b); break;
  case '-':printf("%.2f\n", a-b); break;
  case '*':printf("%.2f\n", a*b); break;
  case '/' :
      switch ((int)b){
      case 0: printf("ERROR!"); break;
      default: printf("%.2f", a/b); break;     } break;
default: printf("ERROR!"); break;
  }
  return 0;
}