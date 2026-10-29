class Solution {
public:
    int countElements(vector<int>& nums) {
        int mini = nums[0];
        int maxi = nums[0];

        for (int i = 1; i < nums.size(); i++){
            if (maxi < nums[i]){
                maxi = nums[i];
            }
            else if (mini > nums[i]){
                mini = nums[i];
            }
        }
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > mini && nums[i] < maxi){
                cnt++;
            }
        }
        return cnt;
    }
};