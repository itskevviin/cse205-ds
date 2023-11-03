class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s1;
        int n = operations.size();
        int sum = 0; 
        for (int i = 0; i < n; i++) {
            if (operations[i] != "+" && operations[i] != "D" && operations[i] != "C") {
                int a = stoi(operations[i]); 
                s1.push(a);
            }
            else {
                if (operations[i] == "C") {
                    s1.pop();
                }
                else if (operations[i] == "D") {
                    s1.push(2 * s1.top());
                }
                else {
                    int t1 = s1.top(); 
                    s1.pop(); 
                    int t2 = s1.top();
                    s1.push(t1); 
                    s1.push(t1 + t2); 
                }
            }
        }

        while (!s1.empty()) {
            sum += s1.top(); 
            s1.pop();
        }

        return sum; 
    }
};