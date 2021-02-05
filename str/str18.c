#include <stdio.h>
#include <string.h>

int main() {//Необходимо сравнить строки между собой без учёта регистра символов.
    char str1 [50], str2 [50];
    fgets (str1, 50, stdin);
    fgets (str2, 50, stdin);

    for (int i=0; i<strlen (str1)-1; i++) {
    if (str1 [i] >= 65 && str1 [i]<= 90) str1 [i]=str1[i]+32;}
    for (int i=0; i<strlen (str2)-1; i++) {
    if (str2 [i] >= 65 && str2 [i]<= 90) str2 [i]=str2[i]+32;}
 
    printf (strcmp (str1, str2)==0 ? "yes" : "no");
               
    return 0;
}