
class Solution {
public:
    int digitSum(int x) {
        int sum = 0;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted = nums;

        sort(sorted.begin(), sorted.end(), [&](int a, int b) {
            if (digitSum(a) == digitSum(b))
                return a < b;
            return digitSum(a) < digitSum(b);
        });

        unordered_map<int, int> pos;
        for (int i = 0; i < n; i++)
            pos[sorted[i]] = i;

        int ans = 0;

        for (int i = 0; i < n; i++) {
            while (nums[i] != sorted[i]) {
                int j = pos[nums[i]];
                swap(nums[i], nums[j]);
                ans++;
            }
        }

        return ans;
    }
};
