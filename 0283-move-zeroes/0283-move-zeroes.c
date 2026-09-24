void moveZeroes(int* arr, int numsSize) {
   int k=0;
   for(int i=0;i<numsSize;i++)
   {
    if(arr[i]!=0)
    {
        int temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
        k++;
    }
   }
}