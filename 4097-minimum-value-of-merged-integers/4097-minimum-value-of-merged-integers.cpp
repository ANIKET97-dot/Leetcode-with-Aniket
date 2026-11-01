class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int mini = INT_MAX;

        for (int i = 0; i < nums.size() - 1; i+=2){
            string res1 = to_string(nums[i]) + to_string(nums[i + 1]);
            int res = stoi(res1);
            mini = min(mini, res);
        }
        return mini;
    }
};