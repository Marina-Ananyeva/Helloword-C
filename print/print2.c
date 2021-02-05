#include <stdio.h>
int main () 
{
printf("What is your name\?\n\tMy name\'s Bond! James Bond!\n");
printf("What is your name\?\nMy name\'s \'Bond\'! \"James Bond\"!\n");
printf("What is your name\?\nMy name\'s Bond! Jame\bs Bond!\n");
printf("What is your name\?\nMy name\'s Bond! James Bond!\n");
printf("What is your name\?\nMy name\'s Bond! James \rBond!\n");

printf("%d\t%d\n%d",10,20,30); 

printf("pervoe slagaemoe: %d\nvtoroe slagaemoe:%d\nsumma: %d\n",10,20,30);

printf("%d + %d = %d\n", 20, 10, 20+10);

printf("%d + %d %c %d\n", 10, 20, '=', 20+10);

int a = 25;
float b = 23.4;
double c = 217.876;
char d = 's';
  
printf("Cheloe %d\n",a);
printf("Odin simvol %c\n",d);
printf("Vewestvennoe %f %g\n",b,c);

int e, f, res;

e = 10;
f = 7;
res = e + f;  
printf("%d + %d = %d\n", e, f, res);

int g=777; 
printf("|%d|\n", g);
printf("|%8d|\n", g);
printf("|%2d|\n", g);

float n=150.5;   
printf("|%f|\n", n);
printf("|%-8.3f|\n", n); 
printf("|%8.2f|\n", n); 
printf("|%4.3f|\n", n);

printf ("%c%c-%d, '\','n',n");
	
return 0;
}