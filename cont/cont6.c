#include <stdio.h>

int main() {/*Число 0 -- если последовательность возрастающая. Число k -- если последовательность не является возрастающей. 
k -- номер первого члена последовательности, которые нарушает возрастание.*/
int a, b=-99999999, i=1;
    while (a!=-9999) {
    scanf ("%d", &a);
    if (a<=b&&a!=-9999) {printf ("%d", i); break;}
    if (a==-9999) {printf ("0"); break;}
    b=a;
    i++;}

  return 0;
}