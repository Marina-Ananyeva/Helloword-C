#include <stdio.h>

int main() {//В заданном массиве поменять местами наибольший и наименьший элементы.
int N, i=0, a=-9999999, b=9999999, d=0, c=0, mass [100]; 
scanf ("%d", &N);

while (i<N) {scanf ("%d", &mass [i]); i++;}
for (i=0; i<N; i++) if (mass [i]>a) {a=mass [i]; c=i;}
for (i=0; i<N; i++) if (mass [i]<b) {b=mass [i]; d=i;}
mass [c]=b;
mass [d]=a;

for (i=0; i<N; i++) printf ("%d ", mass [i]);

 return 0;
}