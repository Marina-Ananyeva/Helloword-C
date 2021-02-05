#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) { //выбор случайного числа из промежутка от S до E
  int S,E;
    scanf("%d%d",&S,&E);
    srand(time(NULL));
    printf("%d\n",S+rand()%(E-S+1));
return 0;
}



