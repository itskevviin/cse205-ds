class Solution {
public:
    string customSortString(string order, string s) {
        int n=order.length();
        int m=s.length();
        string ans="";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(order[i]==s[j]){
                    ans=ans+s[j];
                }
            }
        }
        for(int i=0;i<m;i++){
            bool flag=false;
            for(int j=0;j<n;j++){
                if(order[j]==s[i]){
                    flag=true;
                    // break;
                }
            }
            if(!flag){
                ans=ans+s[i];
            }
        }
        return ans;

    }
};