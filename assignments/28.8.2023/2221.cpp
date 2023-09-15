class Solution {
public:
    int ans = 0;

    void reducer(vector<int> &nums) {
        if(nums.size() == 1){
            ans = nums[0];
            return; 
        }

        vector<int> temp;
        for(int i=0; i<nums.size()-1; i++) {
            temp.push_back( (nums[i] + nums[i+1])%10 );
        }

        reducer(temp);
    }

    int triangularSum(vector<int>& nums) {
        reducer(nums);
        return ans;
    }   
};
