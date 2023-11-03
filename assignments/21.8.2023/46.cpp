class Solution {
private:
 void solve(int idx,vector<int> nums, vector<vector<int>>& ans){
     if(idx>=nums.size()){
         ans.push_back(nums);
         return;
     }
     for(int j=idx;j<nums.size();j++){
         swap(nums[idx],nums[j]);
         solve(idx+1,nums,ans);
         // backtrack
         swap(nums[idx],nums[j]);
     }
 }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int idx=0;
        solve(idx,nums,ans);
        return ans;
        
    }
};