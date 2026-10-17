class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        if (n == 1){
            return 0;
        }

        if (nums[0] > nums[1]){
            return 0;
        }

        for (int j = 1; j < n - 1; j++){
            if (nums[j] > nums[j - 1] && nums[j] > nums[j + 1]){
                return j;
            }
        }
        return n - 1;
    }
};