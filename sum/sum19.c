#include <stdio.h>
#include <math.h>

int main() {
 int r_sf,c,t;
    double r_okr,a,b;
    scanf("%d",&r_sf);
c=4;
    
    a=c*(pow(r_sf,2));

      r_okr=sqrt(a);
                 
         t=2*(r_okr/900);
          
          printf("%.0f %.0d\n",r_okr,t);// put your code here
  return 0;
}


