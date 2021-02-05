#include <stdio.h>

int main() {//В заданном массиве поменять местами первую и вторую половины.
int N, i=0, mass [100]; 
scanf ("%d", &N);

while (i<N) {scanf ("%d", &mass [i]); i++;}
for (i=0; i<N/2; i++) {printf ("%d ", mass [N/2+i]);}
for (i=0; i<N/2; i++) {printf ("%d ", mass [i]);}
    return 0;
}