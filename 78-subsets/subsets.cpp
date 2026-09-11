class Solution {
public:
    void helper(vector<int>& nums, vector<vector<int>>& ans,vector<int>& v,int idx){
        if(idx==nums.size()){ans.push_back(v); return;}

        helper(nums, ans,v,idx+1);
        v.push_back(nums[idx]);
        helper(nums, ans,v,idx+1);
        v.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>v;
        vector<vector<int>> ans;
        helper(nums,ans,v,0);

        return ans;
    }
};