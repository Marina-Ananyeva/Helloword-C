#include <stdio.h>

int main(void) {/*Пользователь вводит точное количество чисел, которые он хочет сравнить, например 5. 
После этого вводит свои пять чисел по модулю не превышающих 100. Далее программа выдаёт ему максимальное среди них.*/

  int N = 0;

  scanf("%d", &N);

  int max = -9999;
  int number;

  for (int i = 1; i <= N; i++){
    scanf("%d", &number);
    if (max < number)
      max = number;
  }

  printf("%d\n", max);

  return 0;
}