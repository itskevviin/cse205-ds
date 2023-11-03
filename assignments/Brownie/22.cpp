class Solution {
private: 
    void solve(int n,int ob,int cb,string s,vector<string>& ans){
        // base case
        if(ob==n && cb==n){
            ans.push_back(s);
            return;
        }
        // add ob
        if(ob<n){
            solve(n,ob+1,cb,s+'(',ans);
        }
        // abb cb
        if(cb<ob){
            solve(n,ob,cb+1,s+')',ans);
        }

    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int ob=0;
        int cb=0;
        string s="";
        solve(n,ob,cb,s,ans);
        return ans;
        
    }
};