class Solution {
public:
    int k=0;
    void moveZeroes(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                int temp=nums[i];
                nums[i]=nums[k];
                nums[k]=temp;
                k++;
            }
        }
    }
}; 