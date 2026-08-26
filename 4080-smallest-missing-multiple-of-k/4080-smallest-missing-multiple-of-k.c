int missingMultiple(int* nums, int numsSize, int k) {
    int multiple;
    int i;
    int found;

    for (multiple = k; ; multiple = multiple + k)
    {
        found = 0;

        for (i = 0; i < numsSize; i++)
        {
            if (nums[i] == multiple)
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            return multiple;
        }
    }
}
