class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        int j = 0,i = 0;
        while(j<n){
            if(nums[j]==nums[i]) j++;
            else{
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};