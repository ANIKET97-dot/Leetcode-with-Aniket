class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> cnt(501, 0);

        for (int num : arr){
            cnt[num]++;
        }
        int ans = -1;
        for (int i = 1; i < cnt.size(); i++){
            if (cnt[i] == i){
                ans = i;
            }
        }
        return ans;
    }
};