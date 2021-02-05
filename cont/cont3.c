#include <stdio.h>

int main() {//YES -- если последовательность положительная, NO в противном случае
int a; 
  
scanf ("%d ", &a);
if (a==-9999) printf ("NO");
if (a<0&&a!=-9999) printf ("NO"); 
  
else {
    while (a!=-9999) {
        scanf ("%d ", &a);
        if (a<0&&a!=-9999) {printf ("NO"); break;}
        if (a==-9999) {printf ("YES"); break;}
    }}
  return 0;
}