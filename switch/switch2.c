#include <stdio.h>

int main(void) {  //проверка делимости на 6
  printf("Enter the number: "); 
  
  int num = 0;  
  scanf("%d",&num);

  switch (num%3) {
    case 0 : 
      switch (num%2) {
        case 0 : printf("GOOD!\n"); break;
        case 1 : printf("BAD!\n"); break;
      }
      break;
    case 1 :
    case 2 : printf("BAD!\n"); break;
  }

  return 0;
}ю
	