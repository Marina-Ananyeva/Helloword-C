#include <stdio.h>
#include <string.h>

int main() {//Написать программу, проверяющую, можно ли из букв, входящих в первую строку, составить вторую строку. 
    char str1 [50], str2 [50];
    int k=0, j=0;
    
    fgets (str1, 50, stdin);
    fgets (str2, 50, stdin);
  
    for (int i=0; i<strlen(str2)-1; i++) {
        while (j<strlen(str1)-1) {
            if (str2[i]==str1[j]) {k=k+1; str1 [j]=1; break;} 
            j++;}
        j=0;}
    
    printf (k>=strlen (str2)-1 ? "yes" : "no");        
   
    return 0;
}