class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0;
        int mini = nums[0];

        for (int i = 0; i < nums.size(); i++){
            sum+= nums[i];
            mini = min(mini, nums[i]);
        }
        return sum - (nums.size() * mini);   
    }
};