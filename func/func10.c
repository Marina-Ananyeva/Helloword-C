void swap(int * a, int * b){/*Написать функцию void sort_arr(int arr[], int n, int fl), которая сортирует переданный ей массив по возрастанию или убыванию, 
в зависимости от значения флага fl: 0 -- от меньшего к большему, 1 -- от большего к меньшему.*/
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;}

void sort_arr(int arr[], int n, int fl){
     int min = 99999, max = -99999, temp, k, m;
   
        for (int i=0; i<n; i++) {  
            
            for (int j=i; j<n; j++) {   
                if (arr [j]<min) {min = arr [j]; m=j;}
                if (arr [j]>max) {max = arr [j]; k=j;}
            }
                  
            if (fl==0) swap (&arr [i], &arr [m]);
            if (fl==1) swap (&arr [i], &arr [k]);
         
            min = 99999; max = -99999;
               }      
}