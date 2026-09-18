class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int lo = 0,mid = 0, hi = n-1;
        while(mid<=hi){
            if(nums[mid]==0) {
                int temp = nums[lo];
                nums[lo] = nums[mid];
                nums[mid] = temp;
                lo++;
                mid++;
            }
            else if(nums[mid]==2){
                int temp = nums[hi];
                nums[hi] = nums[mid];
                nums[mid] = temp;
                hi--;
            }
            else mid++;
        }
    }
};