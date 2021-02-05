#include <stdio.h>

int main() {//Наименьшее общее кратное
int a,b,c=1;
scanf ("%d %d",&a,&b);
while (c%a!=0||c%b!=0) {c++;}
printf ("%d", c);
    return 0;
}