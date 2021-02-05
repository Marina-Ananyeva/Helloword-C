#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {//Вывести строку, изображающую десятичную запись этого же числа.
    
    int mass [100], i, p, Num=0;
    char str [100];
    
    fgets (str, 100, stdin);
    
    p=strlen (str)-1;
    
    for (i=0; i<p; i++) {
        if (str [i]=='1') mass [i]=1;    
        if (str [i]=='0') mass [i]=0;
        Num = Num + mass[i] * pow (2, p-1-i);
        }
             
    printf ("%d", Num); 
    
               return 0;
}