int gcd(int x, int y){//Написать функцию void reduce_fraction(int * a, int * b), которая будет сокращать дробь с числителем a и знаменателем b.
    int k=0;
    for (int i=1; i<=x && i<=y; i++) {
        if (x%i==0 && y%i==0) k=i;}
    return (k);
    }
void reduce_fraction(int * a, int * b){
    int k = gcd(*a, *b);
    *a/= k;
    *b/= k;
    } 