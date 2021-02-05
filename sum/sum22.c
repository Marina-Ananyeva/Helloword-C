#include <stdio.h>
#include <math.h>

int main() {
  int a,b,a1;
    
    scanf("%d",&a);
    a1=fabs(a);
    b=((a1+1)%2)-(a1%2);  
   
    
    
    printf("%d\n",b);// put your code here
  return 0;
}