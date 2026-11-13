
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int sum = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if ((i == 0 || nums[i] != nums[i - 1]) &&
                (i == n - 1 || nums[i] != nums[i + 1])) {
                sum += nums[i];
            }
        }

        return sum;
    }
};
