class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxi = nums[0];
        int mini = nums[0];

        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > maxi){
                maxi = nums[i];
            }

            if (nums[i] < mini){
                mini = nums[i];
            }
        }

        int range = maxi - mini - 2 * k;

        if (range < 0){
            return 0;
        }
        return range;
    }
};