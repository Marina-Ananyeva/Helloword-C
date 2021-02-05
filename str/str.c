#include <stdio.h>

int main(void) {
  
  char str[10];
  char str1[10] = {'Y','o','n','g','C','o','d','e','r','\0'};
  char str2[10] = "Hello!";
  char str3[] = "Hello!";

  for(int i = 0; i < 10; i = i + 1)
    printf("%c\t",str[i]);
  printf("\n");

  puts(str1);
  puts ("Hello!");
  
  printf("%s\n",str2);
  
  fputs(str3, stdout);
  printf("\n");
  fputs("Hello!", stdout);

  return 0;
}