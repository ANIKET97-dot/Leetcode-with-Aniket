class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int freq[501] = {};

        for (int x : nums){
            freq[x]++;
        

        if (freq[x] > 2){
            return false;
        }
    }
    return true;
    }
};