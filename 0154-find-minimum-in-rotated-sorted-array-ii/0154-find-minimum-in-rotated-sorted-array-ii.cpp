class Solution {
public:
    int findMin(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++){
            bool found = false;
            for (int j = 0; j < ans.size(); j++){
                if (nums[i] == ans[j]){
                    found = true;
                    break;
                }
            }
            if (!found){
                ans.push_back(nums[i]);
            }
        }

        int ans1 = ans[0];
        for (int i = 1; i < ans.size(); i++){
            ans1 = min(ans1, ans[i]);
        }
        return ans1;
    }
};