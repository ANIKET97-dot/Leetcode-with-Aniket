class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int maxCnt = 0;
        for (int i : nums){
            if (i == 1){
            cnt++;
            
            if (cnt > maxCnt){
                maxCnt = cnt;
            }
            }
            else{
                cnt = 0;
            }
        }
        return maxCnt;
    }
};