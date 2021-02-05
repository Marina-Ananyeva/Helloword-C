#include <stdio.h>

int main() {/*Вывести все числа из промежутка. 
При этом число A должно выводиться 1 раз, число A+1 -- два раза, A+2 -- три раза и т.д.*/
int A,B,c,d;
scanf("%d%d",&A,&B);
for (c=A;c<=B;c++){
    for (d=A;d<=c;d++)
    {printf ("%5d",c);
    }
}
    
    return 0;
}