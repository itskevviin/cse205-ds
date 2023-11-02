class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;

        // Count the frequency of each number in nums
        for (int num : nums) {
            mp[num]++;
        }

        // Create a vector of pairs (frequency, number)
        vector<pair<int, int>> fq;
        for (auto it : mp) {
            fq.push_back({ it.second, it.first });
        }

        // Sort the vector in descending order based on frequency
        sort(fq.rbegin(), fq.rend());

        vector<int> ans;

        // Push the top k frequent numbers into ans
        for (int i = 0; i < k ; i++) {
            ans.push_back(fq[i].second);
        }

        return ans;
    }
};