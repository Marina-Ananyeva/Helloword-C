#include <stdio.h>

int main() {/*Напишите программу, которая выводит на экран числа от 1 до 100. 
При этом вместо чисел, кратных трем, программа должна выводить слово «Fizz», а вместо чисел, кратных пяти — слово «Buzz». 
Если число кратно и 3, и 5, то программа должна выводить слово «FizzBuzz»*/
int a=1;
while (a<=100) {
if (a%15==0) {printf ("FizzBuzz "); a++; continue;}
if (a%3==0) {printf ("Fizz "); a++; continue;}
if (a%5==0) {printf ("Buzz "); a++; continue;}
printf ("%d ", a);
a++;}  
  return 0;
}