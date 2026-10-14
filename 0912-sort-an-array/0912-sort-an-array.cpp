
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if (nums.size() <= 1) return nums;

        int n = nums.size();
        int mid = n / 2;

        vector<int> left(nums.begin(), nums.begin() + mid);
        vector<int> right(nums.begin() + mid, nums.end());

        left = sortArray(left);
        right = sortArray(right);

        vector<int> ans;
        int i = 0, j = 0;

        while (i < left.size() && j < right.size()) {
            if (left[i] <= right[j])
                ans.push_back(left[i++]);
            else
                ans.push_back(right[j++]);
        }
        while (i < left.size())
            ans.push_back(left[i++]);

        while (j < right.size())
            ans.push_back(right[j++]);
        return ans;
    }
};
