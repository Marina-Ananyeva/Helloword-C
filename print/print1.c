#include <stdio.h>
#define N 100

int main () 

{
    int a=10;
    int b[100];

    printf("Integer: %lu\n", sizeof(a));
    printf("Float: %lu\n", sizeof(float));
    printf("Array of 100 integers: %lu\n", sizeof(b));
    


    return 0;
}