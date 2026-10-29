class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cnt1 = 0;
        int cnt2 = 0;
        int maxi = 0;

        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > 0){
                cnt1++;
            }
            else if (nums[i] < 0){
                cnt2++;
            }
            else{
                continue;
            }
        }
        maxi = max(cnt1, cnt2);
        return maxi;
    }
};