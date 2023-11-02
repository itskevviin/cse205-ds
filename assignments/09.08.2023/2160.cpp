class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        int arr[4];
        for (int i = 0; i < 4; ++i) {
            arr[i] = s[i] - '0';
        }
        sort(arr, arr + 4);
        
        int ans = 0;
        
        if (arr[0] == 0) {
            ans = (arr[1] * 10) + arr[2] + arr[3];
        } else if (arr[1] == 0) {
            ans = arr[3] * 10 + arr[2];
        } else if (arr[2] == 0) {
            ans = arr[3];
        } else {
            ans = arr[0] * 10 + arr[3] + arr[2] + arr[1] * 10;
        }
        
        return ans;
    }
};