class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> mp;
        vector<int> v;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        // arr.erase(unique(arr.begin(), arr.end()), arr.end());
        for(auto& it:mp){
            v.push_back(it.second);
        }
        sort(v.rbegin(),v.rend());
        
        int x=n/2;
        int ans=v[0];
        int ctr=1;
        for(int i=1;i<v.size();i++){
            if(ans>=x){
                break;
            }
            else{
                ans=ans+v[i];
                ctr++;
            }
        }
        return ctr;
    }
};