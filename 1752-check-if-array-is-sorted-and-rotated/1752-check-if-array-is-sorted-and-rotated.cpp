class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        bool found = false;

        for (int i = 0; i < n; i++){
            if (nums[i] > nums[(i + 1) % n]){
                if (found == true){
                    return false;
                }
                found = true;
            }
        }
        return true;
    }
};