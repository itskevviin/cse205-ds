class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') 
            {
                brackets.push(c);
            } 
            else 
            {
                if (brackets.empty()) 
                {
                    return false; // Closing bracket with no matching open bracket
                }
                
                char open = brackets.top();
                brackets.pop();
                
                if ((c == ')' && open != '(') || (c == '}' && open != '{') || (c == ']' && open != '[')) 
                {
                    return false; // Mismatched brackets
                }
            }
        }

        return brackets.empty(); // Check if there are any unmatched open brackets left
    }
};