int binary_search(int arr[], int n, int arg){//ункция должна находить порядковый номер элемента со значением arg в отсортированном по возрастанию массиве arr
 
  int first = 0;
  int last = n-1; 
  int res = -1;
 
    for (int i=0; first<last; i++) {
        int mid = (last + first) / 2;
        if (arg <= arr[mid])
              last = mid;
        else
              first = mid + 1;}
  
    if (arr[last] == arg)
        res = last;

	return res;	   
}
