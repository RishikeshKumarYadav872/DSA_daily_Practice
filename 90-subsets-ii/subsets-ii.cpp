class Solution {
public:
    void helper(vector<vector<int>>& v,vector<int>ans,vector<int>& nums,int idx,bool flag){
        if(idx==nums.size()){v.push_back(ans); return;}

        if(idx==nums.size()-1){
            if(flag == true) helper(v,ans,nums,idx+1,true);
            ans.push_back(nums[idx]);
            helper(v,ans,nums,idx+1,true);
            return;
        }
        int ch = nums[idx];
        int dh = nums[idx+1]; 

        if(ch==dh){
            if(flag==true) helper(v,ans,nums,idx+1,true);
            ans.push_back(nums[idx]);
            helper(v,ans,nums,idx+1,false);
        }
        else{
            if(flag==true) helper(v,ans,nums,idx+1,true);
            ans.push_back(nums[idx]);
            helper(v,ans,nums,idx+1,true);
        }

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        vector<vector<int>>v;
        vector<int>ans; 
        helper(v,ans,nums,0,true);  

        return v;
    }
};