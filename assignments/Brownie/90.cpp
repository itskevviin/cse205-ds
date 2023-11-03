class Solution {

private:
    void solve(vector<int> nums, int idx,vector<int> output,vector<vector<int>>& ans){

        if(idx>=nums.size()){
            sort(output.begin(),output.end());
            ans.push_back(output);
            return;
        }
        //exclude
        solve(nums,idx+1,output,ans);
        // include
        output.push_back(nums[idx]);
        solve(nums,idx+1,output,ans);

    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int idx=0;
        solve(nums,idx,output,ans);
        sort(ans.begin(),ans.end());
        vector<vector<int>> ans1(ans);
ans1.erase(unique(ans1.begin(), ans1.end()), ans1.end());


        return ans1;
    }

};