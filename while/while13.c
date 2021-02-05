#include <stdio.h>

int main(void) {//Быстрое возведение в степень
  int a = 0, k = 0;
  int res = 0;

  scanf("%d %d", &a, &k);
  res=1;
 while(k > 0){
    if (k%2 == 0){   
      res = res*a*a;
      k = k-2;
    }else {
      res = res * a;
      k = k - 1;
   }
 }
  printf("%d\n", res);
  return 0;
}