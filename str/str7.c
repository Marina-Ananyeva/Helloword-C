#include <stdio.h>

int main() {//Посчитать количество символов, на которые отличаются две строки

    char str [15], str1 [15];
    int k=0;
    fgets (str, 15, stdin);
    fgets (str1, 15, stdin);
    
    for (int i=0; str[i]!='\0'; i++) {
        if (str[i]!=str1[i]) k=k+1;}
    printf ("%d", k);
    
  return 0;
}