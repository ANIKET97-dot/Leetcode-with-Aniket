
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major = 0;
        int cnt = 0;

        for (int x : nums) {
            if (cnt == 0) {
                major = x;
            }
            if (x == major) {
                cnt++;
            } else {
                cnt--;
            }
        }
        return major;
    }
};
