
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for (int i : nums) {
            vector<int> digits;

            while (i != 0) {
                digits.push_back(i % 10);
                i /= 10;
            }
            reverse(digits.begin(), digits.end());
            for (int d : digits) {
                ans.push_back(d);
            }
        }
        return ans;
    }
};
