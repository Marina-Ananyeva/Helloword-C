#include <stdio.h>
#include <stdlib.h>
#include <time.h> // чтобы использовать функцию time()
 
int main(void) {//выбор случайного чис промежутке от 0 до 2
  srand(time(NULL));
     int rand_digital=0+rand()%(2-0+1);
    printf("%d\n",rand_digital);

return 0;
}



