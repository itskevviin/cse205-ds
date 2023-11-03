class Solution {
private:
    void solve(vector<int> candidates, int target,int sum,int idx,vector<int> output,vector<vector<int>>& ans){

            if(sum==target){
                ans.push_back(output);
                return;
            }
            if(sum>target || idx >= candidates.size()){
                return;
            }
        //include
        sum=sum+candidates[idx];
        output.push_back(candidates[idx]);
        solve(candidates,target,sum,idx,output,ans);
        //exclude
        sum=sum-candidates[idx];
        output.pop_back();
        solve(candidates,target,sum,idx+1,output,ans);



    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sum=0;
        int idx=0;
        vector<vector<int>> ans;
        vector<int> output;
        solve(candidates,target,sum,idx,output,ans);
        return ans;
    }
};