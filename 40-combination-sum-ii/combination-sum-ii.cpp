class Solution {
public:
    void combinationSum(vector<int>& candidates, vector<int>v, vector<vector<int>>&ans, int target,int idx){
        if(target==0){
            ans.push_back(v);
            return;
        }

        if(target<0) return;

        for(int i=idx; i<candidates.size();i++){
            if(i>idx && candidates[i]==candidates[i-1]) continue;
            v.push_back(candidates[i]);
            combinationSum(candidates,v,ans,target-candidates[i],i+1);
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>v;
        vector<vector<int>>ans;

        combinationSum(candidates,v,ans,target,0);

        return ans;
    }
};