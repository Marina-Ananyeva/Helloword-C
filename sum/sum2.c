#include <stdio.h>
int main () 
{
    int a,res;
    scanf("%d",&a);
    res=a/100+(a/10-a/100*10)+(a-a/10*10);
    printf("%d\n", res);

return 0;
}



