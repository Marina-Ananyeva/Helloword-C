#include <stdio.h>

int main() {//Удалить из строки лишние пробелы.
    char str [100];
    fgets (str, 100, stdin);
    
    for (int i=0; str[i]!='\0'; i++) 
        if (str[i]!=' '||str[i]==' '&&str[i-1]!=' ') printf ("%c", str[i]);
           
            return 0;
}