class Solution {
public:
    void combination(vector<int>& candidates,vector<vector<int>>&ans,vector<int>v,int target,int idx){
        if(target == 0){
            ans.push_back(v);
            return;
        }

        if(target < 0) return;
        for(int i=idx;i<candidates.size();i++){
            v.push_back(candidates[i]);
            combination(candidates,ans,v,target-candidates[i],i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>>ans;
        vector<int>v;
        combination(candidates,ans,v,target,0);

        return ans;
    }
};