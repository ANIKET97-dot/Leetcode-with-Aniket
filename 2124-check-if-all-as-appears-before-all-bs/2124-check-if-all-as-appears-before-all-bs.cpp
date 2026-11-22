class Solution {
public:
    bool checkString(string s) {
        string temp = s;
        sort(s.begin(), s.end());
        if (temp == s){
            return true;
        }
        return false;

        
    }
};