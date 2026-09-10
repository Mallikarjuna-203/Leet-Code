int *twoSum(int *arr, int size, int k, int *returnSize)
{
    int *result=malloc(2*sizeof(int));
    for(int i=0;i<size-1;i++)
    {
        int sum=0;
        for(int j=i+1;j<size;j++)
        {
            sum=arr[i]+arr[j];
            if(sum==k)
            {
                result[0]=i;
                result[1]=j;
                *returnSize=2;
                return result;
            }
        }
    }
    return NULL;
}