#include <stdio.h>
#include <string.h>

int main() {//Необходимо сравнить строки между собой с учётом регистра символов.
    char str1 [50], str2 [50];
    scanf ("%s", str1);
    scanf ("%s", str2);
    printf (strcmp (str1, str2)==0 ? "yes" : "no");
               
    return 0;
}