class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        const int MOD = 1e9 + 7;
        long long ans = 0;
        int count[31] = {0};

        for(int i = 0; i < nums.size(); i++) {
            for(int bit = 0; bit < 31; bit++) {
                if(nums[i] & (1 << bit)) {
                    count[bit]++;
                }
            }
        }

        while(k--) {
            long long num = 0;

            for(int bit = 30; bit >= 0; bit--) {
                if(count[bit] > 0) {
                    num |= (1LL << bit);
                    count[bit]--;
                }
            }

            ans = (ans + num * num) % MOD;
        }

        return ans;
    }
};