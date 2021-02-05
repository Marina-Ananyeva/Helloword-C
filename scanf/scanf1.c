#include <stdio.h>
int main () 
{

int age,height,weight;
double bov_m,bov_f;
printf("Vash vozrast? (god)\n");//здесь запрашивается возраст
scanf ("%d",&age);
printf("Vash rost? (cm)\n");/*здесь запрашивается рост*/
scanf("%d",&height);
printf("Vash ves? (kg)\n");//здесь запрашивается вес
scanf("%d",&weight);
bov_m=10*weight+6.25*height-5*age+5;
bov_f=10*weight+6.25*height-5*age-161;
printf("|BMR|\n");
printf("|male|female|");
printf("|%8.2f|%8.2f|\n",bov_m,bov_f);

  
return 0;
}



