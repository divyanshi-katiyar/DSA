class Solution {
public:
    void solve(int open, int close, int n, string curr, vector<string>& ans) {
        // Base case
        if (curr.length() == 2 * n) {
            ans.push_back(curr);
            return;
        }

        // Add '(' if we still can
        if (open < n) {
            solve(open + 1, close, n, curr + "(", ans);
        }

        // Add ')' only if valid
        if (close < open) {
            solve(open, close + 1, n, curr + ")", ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(0, 0, n, "", ans);
        return ans;
    }
};
