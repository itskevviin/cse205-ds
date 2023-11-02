class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();
        vector<int> v1;
        vector<int> v2;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (arr2[i] == arr1[j]) {
                    v1.push_back(arr2[i]);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            bool flag = false;
            for (int j = 0; j < m; j++) {
                if (arr1[i] == arr2[j]) {
                    flag = true;
                    break; 
                }
            }
            if (!flag) {
                v2.push_back(arr1[i]);
            }
        }
        sort(v2.begin(),v2.end());
        v1.insert(v1.end(), v2.begin(), v2.end());

        return v1;
    }
};