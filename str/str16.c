#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main() {//Определить можно ли из указанных слов составить цепочку для игры в "Города".
    char str1 [50], str2 [50];
    scanf ("%s", str1);
    scanf ("%s", str2);
    printf (str1 [0]==str2 [strlen (str2)-1]-32||str2 [0]==str1 [strlen (str1)-1]-32 ? "yes" : "no");
               
    return 0;
}