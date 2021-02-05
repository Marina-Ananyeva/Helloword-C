#include <stdio.h>
#include <string.h>

int main(void) {//Программа должна склеивать строку, которая уже есть в программе и строку, введенную пользователем.
    char str1[40] = "Hello, "; 
    char str2[20];    
    scanf("%s", str2);
    strcat (str1, str2);
    printf ("%s\n", str1);

    return 0;
}