void sum_digits(int * x){//Написать функцию void sum_digits(int * x), которая заменяет число x на сумму цифр из которых состоит число x.
    int A;
    int sum =0;
    for (int i=0; *x>0; i++) {
        A=*x % 10;
        *x=(*x-A) / 10;
        sum = sum + A;}
   
    *x=sum;
        
}