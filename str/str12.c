#include <stdio.h>
#include <string.h>

int main() {// Найти в строке слова, которые начинаются и оканчиваются одной и той же буквой. 
    char str [100];
    fgets (str, 100, stdin);
    int k=0, i=0, d=0, len;
   
    len=strlen (str)-1;

    for (i=0; i<=len; i++) {
        if (str[i]==' '||i==len) {
            if (str[k]==str[i-1]) {
                for (d; d<=i; d++) {printf ("%c", str[d]);}}
        k=i+1;
        d=i+1;
        i=i+1;
        }}
 
    return 0;
}