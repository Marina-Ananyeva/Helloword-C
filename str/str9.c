#include <stdio.h>

int main() {//Удалить часть символьной строки, заключенную между последовательностями символов /* и */
    int i, j, k=0;
    char str [100];
    fgets (str, 100, stdin);
    
    for (i=0, j=0; str[i]!='\0'; i++, j++) {
        if (str[i]=='/'&&str[i+1]=='*'&&str[i+2]!='/') break; 
        printf ("%c", str[i]); }
  
     for (i; str[i]!='\0'; i++){
        if (str[i]=='*'&&str[i+1]=='/') {
            i=i+2;
            for (i; str[i]!='\0'; i++) printf ("%c", str[i]);
            k=k+1;}}  
    
     if  (k<1) {
         for (j; str[j]!='\0'; j++)  printf ("%c", str[j]);} 
                           
    return 0;
}