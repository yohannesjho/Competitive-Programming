int* countingSort(int arr_count, int* arr, int* result_count) {
   int *result=calloc(100, sizeof(int));
   *result_count=100;
   
   for(int i=0;i<arr_count;i++)
        {
            result[arr[i]]++; 
        }
       
       
       return result;
}