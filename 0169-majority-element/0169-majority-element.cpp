
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int cnt = 0;

        for (int x : nums) {
            if (cnt == 0) {
                candidate = x;
            }
            if (x == candidate) {
                cnt++;
            } else {
                cnt--;
            }
        }
        return candidate;
    }
};
