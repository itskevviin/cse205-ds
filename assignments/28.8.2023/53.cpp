class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> ps;
        ps.push_back(0);
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            ps.push_back(sum);
        }
        int ans = -1*(1E9);
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n+1; j++) {
                int d = ps[j] - ps[i];
                ans = max(ans, d);
            }
        }
        return ans;
    }
};
