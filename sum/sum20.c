#include <stdio.h>

int main() {
  int a;
    double b,c,d;
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    d=(a/100)%10;
    
    printf("%.0f%.0f%.0f\n",b,c,d);// put your code here
  return 0;
}


