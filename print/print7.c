#include <stdio.h>
int main () 
{

int z = 1/10;
  float x = 1.0/10.0;
  double y = 1.0/10.0;
  
  printf("int:\n%d\n\n", z);
  printf("float:\n4\t--\t%.4f\n10\t--\t%.12f\n16\t--\t%.16f\n\n", x,x,x);
  printf("double:\n4\t--\t%.4f\n10\t--\t%.12f\n16\t--\t%.16f\n", y,y,y);

      

return 0;
}



