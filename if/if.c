#include <stdio.h>

int main() {
  int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    if (a>0&&b>0&&c<0||a>0&&b<0&&c>0||a<0&&b>0&&c>0){
        printf("2");}
    else {if (a>0&&b>0&&c>0) {
        printf ("3");}
    else {if (a<0&&b<0&&c<0){
            printf ("0");}
    else {if (a<0&&b<0&&c>0||a>0&&b<0&&c<0||a<0&&b>0&&c<0){
            printf ("1");}
              }}}

  return 0;
}
              