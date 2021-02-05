#include <stdio.h>
#include <string.h>

int main() {//Вывести полное название файла
    char str1 [50], str2 [4], str3 [2]= {'.'};
    
    fgets (str1, 27, stdin);
    fgets (str2, 4, stdin);
    
    int len=strlen (str1);
    str1 [len-1]='\0';
    
    strcat(strcat(str1, str3),str2);
    printf ("%s", str1); 
  return 0;
}