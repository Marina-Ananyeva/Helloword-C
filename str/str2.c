#include <stdio.h>

int main() {//Подсчитать количество символов в строке, без учёта нуль-символа.
    char a[50] = { 0 };
    int i, p;
    p = 0;
    fgets(a, 50, stdin);
    for (i = 0; a[i] != '\0'; i++) 
        p = p + 1;
        printf("%d", p);


    return 0;
}  