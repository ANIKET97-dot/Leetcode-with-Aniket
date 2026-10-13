class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++){
            nums[i] = nums[i] * nums[i];
        }

        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long ans = 0;

        for (int i = 0; i < n / 2; i++){
            ans -= nums[i];
        }

        for (int i = n / 2; i < n; i++){
            ans += nums[i];
        }

        return ans;
    }
};