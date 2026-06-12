class Solution {
    public:
        void helper(string& temp, int n, int open, int close, vector<string>& ans) {
            // base case
            if (temp.size() == 2 * n) {
                ans.push_back(temp);
                return;
            }
            if (open < n) {
                temp.push_back('(');
                helper(temp, n, open + 1, close, ans);
                temp.pop_back();
            }
    
            if (close < open) {
                temp.push_back(')');
                helper(temp, n, open, close + 1, ans);
                temp.pop_back();
            }
        }
        vector<string> generateParenthesis(int n) {
            string temp = "";
            vector<string> ans;
            helper(temp, n, 0, 0, ans);
            return ans;
        }
    };