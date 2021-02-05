#include <stdio.h>

int main() {//Определить является ли данная строка записью числа (целого или вещественного)/
    int i, k=0, c=0;
    char str [100];
    fgets (str, 100, stdin);
    for (i=0; str [i]!='\n'; i++) {
        if (str[i]>=48 && str[i]<=58) k=k+1;
        if (str[i]=='+' && i==0 ||str[i]=='-' && i==0) k=k+1;
        if (str [i]==46 && i!=0 && str[i+1]!='\n' && str[i-1]!='+' && str[i-1]!='-') c=c+1;
        if (str [i]>57) {k=0; c=0;}}
    printf ((k==i) ? "int": (k=i-1&&c==1) ? "float" : "error");    
    return 0;
}