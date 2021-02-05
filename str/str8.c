#include <stdio.h>

int main() {//Напишите программу, которая по описанию пути к кладу определяет точные координаты клада
    int N, i, steps, x=0, y=0;
    scanf ("%d", &N);
    char str [100];
    
    for (i=0; i<N; i++) {
    scanf("%s %d", str, &steps);
     
    if (str [0] =='N') y=y+steps; 
    if (str [0] =='S') y=y-steps; 
    if (str [0] =='E') x=x+steps; 
    if (str [0] =='W') x=x-steps;  
    }        
 
    printf ("%d %d", x, y);
  return 0;
}