#include <stdio.h>


int main () 

{
   char not_num []="567";
   int num;
   int a=10;
   num=(not_num[0]-'0')*100+(not_num[1]-'0')*10+(not_num[2]-'0');

   printf ("%d\n", num-a);
   

    return 0;
}