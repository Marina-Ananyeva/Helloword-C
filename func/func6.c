int gcd(int x, int y){//Написать функцию int gcd(int x, int y), которая ищет наибольший общий делитель для чисел x и y.
    int k=0;
    for (int i=1; i<=x && i<=y; i++) {
        if (x%i==0 && y%i==0) k=i;}
    return (k);
}

