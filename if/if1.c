#include <stdio.h>

int main() {
 int a,b;
    scanf("%d %d", &a,&b);
    
    if ((b==2)&&(1<=a<=29)) printf ("correct");
   
    else if ((b==4||b==6||b==9||b==11)&&(1<=a<=30)) printf ("correct");
    
    else if ((b==1||b==3||b==5||b==7||b==8||b==10||b==12)&&(1<=a<=31)) printf ("correct");
   
     else printf ("error");
  
  return 0;
}