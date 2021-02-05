#include <stdio.h>

int main() {
  int N, D=0, D1, D2, a, b, c, d, i=0, j, z, y;
    printf ("\nSumma:");
    scanf("%d",&N);
    printf ("\nMnogiteli:");
    scanf("%d %d %d %d",&a,&b,&c,&d);  

printf ("\nHello, Slovo Za Slovo!\n\n");
while (i<10000) {
i++;
D1=a*i;
j=1;
z=1;
y=1;
while (j<10000){ 
D2=b*j;
D=D1+D2;
if (D==N) printf ("%d %c %d + %d %c %d\n", a, 'x', i, b, 'x', j);
j++;}
while (z<10000){ 
D2=c*z;
D=D1+D2;
if (D==N) printf ("%d %c %d + %d %c %d\n", a, 'x', i, c, 'x', z);
z++;}
while (y<10000){ 
D2=d*y;
D=D1+D2;
if (D==N) printf ("%d %c %d + %d %c %d\n", a, 'x', i, d, 'x', y);
y++;}
}

j=0;

while (j<10000) {
j++;
D1=b*j;
z=1;
y=1;

while (z<10000){ 
D2=c*z;
D=D1+D2;
if (D==N) printf ("%d %c %d + %d %c %d\n", b, 'x', j, c, 'x', z);
z++;}
while (y<10000){ 
D2=d*y;
D=D1+D2;
if (D==N) printf ("%d %c %d + %d %c %d\n", b, 'x', j, d, 'x', y);
y++;}
}

z=0;
while (z<10000) {
z++;
D1=c*z;
y=1;
while (y<10000){ 
D2=d*y;
D=D1+D2;
if (D==N) printf ("%d %c %d + %d %c %d\n", c, 'x', z, d, 'x', y);
y++;}
}


printf ("\nIf no result, try again!\n\n");
  return 0;
}
              