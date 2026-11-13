class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++){
            if (i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            if (i < n - 1 && nums[i] == nums[i + 1]){
                continue;
            }
            ans += nums[i];
        }
        return ans;
    }
};