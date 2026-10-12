class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        const int MOD = 1e9 + 7;
        int count[31] = {0};
        long long ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            for(int bit = 0; bit < 31; bit++) {
                if((nums[i] >> bit) & 1) {
                    count[bit]++;
                }
            }
        }

        while(k > 0) {
            long long num = 0;

            for(int bit = 30; bit >= 0; bit--) {
                if(count[bit] > 0) {
                    num += (1LL << bit);
                    count[bit]--;
                }
            }

            ans = (ans + num * num) % MOD;
            k--;
        }

        return ans;
    }
};