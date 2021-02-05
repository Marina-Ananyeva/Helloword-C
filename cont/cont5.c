#include <stdio.h>

int main() {//YES -- если последовательность является возрастающей, NO в противном случае.
int a, b=-99999999;
    while (a!=-9999) {
    scanf ("%d", &a);
    if (a<=b&&a!=-9999) {printf ("NO"); break;}
    if (a==-9999) {printf ("YES"); break;}
    b=a;}

  return 0;}