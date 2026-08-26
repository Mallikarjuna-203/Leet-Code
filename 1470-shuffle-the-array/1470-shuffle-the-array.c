

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *array;
    int arraySize= n+n;
    array=malloc(arraySize*4);
    int j=0;
    for(int i=0;i<n;i++)
    {
        array[j]=nums[i];
        j++;
        array[j]=nums[n+i];
        j++;
    }
    *returnSize=arraySize;
    return array;
}