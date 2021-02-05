void swap(int * a, int * b){//Написать функцию void swap(int * x, int * y), которая меняет значения переменных местами.
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
