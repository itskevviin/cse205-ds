class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ctr=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ctr++;
            }
            else{
                ctr=0;
            }
            ans=max(ans,ctr);
        }
        return ans;
    }
};
