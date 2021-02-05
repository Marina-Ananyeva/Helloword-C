int minmax(int arr[], int n, int fl){/*Напишите функцию int minmax(int arr[], int n, int fl), которая возвращает максимальный или 
минимальный элемент массива arr, в зависимости от значения флага fl. 0 -- минимум, 1 -- максимум.*/
    int min = 99999, max = -99999;
    for (int i=0; i<n; i++) {
        if (arr [i]< min) min = arr [i];
        if (arr [i]>max) max = arr [i];}
    return (fl==0 ? min : max);

}


