#include <stdio.h>

int main(void) { 
  
  int a = 10, b = 5, c = 2;
  char ch = 'a';
  
  printf("%d\n", b > c );
  printf("%d\n", a == b*c );
  printf("%d\n", a != b*c );
  printf("%d\n", a < c );
  printf("%d\n", b >= c + 3 );
  printf("%d\n", -1 <= 2 );
  printf("%d\n", ch == 'a');
  printf("%d\n", ch != 'a');

  printf("%d\n", a == b*c );//добавляем оператор логическое НЕ
  printf("%d\n", !(a == b*c) );
  printf("%d\n", a != b*c );
  printf("%d\n", !(a != b*c) );

  printf("%d\n", 1 || 1 );//добавляем оператор логическое ИЛИ
  printf("%d\n", 1 || 0 );
  printf("%d\n", 0 || 1 );
  printf("%d\n", 0 || 0 );

  printf("%d\n", 1 && 1 );//добавляем оператор логическое И
  printf("%d\n", 1 && 0 );
  printf("%d\n", 0 && 1 );
  printf("%d\n", 0 && 0 );
    
  return 0;
}