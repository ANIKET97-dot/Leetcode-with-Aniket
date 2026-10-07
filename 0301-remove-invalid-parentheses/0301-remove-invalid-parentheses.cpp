class Solution {
public:

    bool isValid(string s) {
        int count = 0;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '(') {
                count++;
            }
            else if(s[i] == ')') {
                count--;

                if(count < 0)
                    return false;
            }
        }

        return count == 0;
    }

    void solve(string s, vector<string>& ans,
               unordered_set<string>& visited) {

        if(isValid(s)) {
            ans.push_back(s);
            return;
        }

        for(int i = 0; i < s.size(); i++) {

            if(s[i] != '(' && s[i] != ')')
                continue;

            string temp = s.substr(0, i) + s.substr(i + 1);

            if(visited.find(temp) == visited.end()) {
                visited.insert(temp);
                solve(temp, ans, visited);
            }
        }
    }

    vector<string> removeInvalidParentheses(string s) {

        vector<string> ans;
        unordered_set<string> visited;

        visited.insert(s);

        solve(s, ans, visited);

        int maxLength = 0;

        for(int i = 0; i < ans.size(); i++) {
            maxLength = max(maxLength, (int)ans[i].size());
        }

        vector<string> result;

        for(int i = 0; i < ans.size(); i++) {
            if(ans[i].size() == maxLength) {
                result.push_back(ans[i]);
            }
        }

        return result;
    }
};