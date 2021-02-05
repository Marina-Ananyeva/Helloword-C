#include <stdio.h>
int main () 
{

int dollars;
double rub, kurs;
printf("Summa v dollars\n");
scanf ("%d",&dollars);
printf("Kurs\n");
scanf("%lf",&kurs);
rub=dollars*kurs;
printf("K polucheniy\n");
printf("%.2f%s\n",rub, "rub");
 
return 0;
}



