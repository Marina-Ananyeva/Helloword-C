#include <stdio.h>
#include <string.h>

int main() {//В строке слова зашифрованы — каждое из них записано наоборот. Написать программу, расшифровывающую строку.
    char str [100], a;
    fgets (str, 100, stdin);
    int k=0, i=0, d, len;
   
    len=strlen (str)-1;

    for (i=0; i<=len; i++) {
        if (str[i]==' '||i==len) {
        for (d=0; d<(i-k)/2; d++) {
        a=str[k+d];
        str[k+d]=str[i-1-d];
        str[i-1-d]=a;}
        
        k=i+1;
        i=i+1;}}
        
   for (i=0; i<=len; i++) printf ("%c", str[i]);
    
    return 0;
}