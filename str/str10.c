#include <stdio.h>

int main() {//Написать программу, реализующую вывод числа с разделением на триады цифр.
    int A, i,j=0, mass [3];
    
    scanf ("%d", &A);
  
    for (i=0; A>=1; i++) {   
        if (A>=100) mass[i]= A%1000;
        if (A<100) mass [i]=A;
        A=(A-A%1000)/1000;}
    
    for (i=i-1; i>=0; i--) {     
        printf ("%d", mass[i]);
        printf (" ");}   

  return 0;
}