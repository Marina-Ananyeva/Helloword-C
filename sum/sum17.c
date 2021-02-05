#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) { //выбор случайного числа из промежутка от 0 до N
  int N;
    scanf ("%d",&N);
    srand(time(NULL));
    printf("%d\n",rand()%(N-0+1));
return 0;
}



