#include <stdio.h>

int main(void) { 
 

  printf("Выберите правильный вариант ответа. Начало и конец Второй мировой войны:\n");
  printf("  a. 1 сентября 1939 -- 2 сентября 1945\n");
  printf("  b. 1 сентября 1939 -- 9 мая 1945\n");
  printf("  c. 22 июня 1941 -- 9 мая 1945\n");
  printf("  d. 22 июня 1941 -- 2 сентября 1945\n");
  
  char answer; 
  printf("Введите ваш вариант ответа: ");
  scanf("%c",&answer);

switch (answer) {  
    case 'a': printf("GOOD!\n"); break;
    case 'b': 
    case 'c': 
    case 'd': printf("BAD!\n"); break;
    default: printf("ERROR!\n");break;
  }

  return 0;
}
	