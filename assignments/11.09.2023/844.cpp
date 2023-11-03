class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> v1;
        vector<char> v2;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'&& v1.size()!=0){
                v1.pop_back();
            }
            else{
                if(s[i]!='#')
                v1.push_back(s[i]);
            }
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#'&& v2.size()!=0){
                v2.pop_back();
            }
            else{
                if(t[i]!='#')
                v2.push_back(t[i]);
            }
        }
        if(v1.size()!=v2.size()){
            return false;
        }
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                return false;
            }
        }
        return true;
    }
};