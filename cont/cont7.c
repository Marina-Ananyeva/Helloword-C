#include <stdio.h>

int main() {//Вывести все секретные кодограммы.

int a, i;
    while (a!=-9999) {
        scanf ("%d", &a);
        if (a==-9999) break;
        if (a==2517) {
            for (i=0; a!=-9999;i++) {
                scanf ("%d", &a);
                if (a!=-9999) printf ("%d ", a);
                else break;}}
        else continue;}
  
  return 0;
}