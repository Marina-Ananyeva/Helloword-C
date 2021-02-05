#include <stdio.h>

int main() {//Найти в строке заданный символ.
    int i=0, k=0;
    char a,  str [100];
    scanf ("%c ", &a);
    fgets (str, 100, stdin);
    fflush (stdin); 
    
    while (str[i]!='\n') {
        if (str[i]==a) {printf ("%d\n", i); k=1; break;}
        i++;}
    
    if (k==0) printf ("-1");
           
  return 0;
}    
 