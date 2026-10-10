class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        vector<int> diff;
        int n = nums1.size();
        long long k = (long long)k1 + k2;
        long long total = 0;

        for(int i = 0; i < n; i++) {
            diff.push_back(abs(nums1[i] - nums2[i]));
            total += diff[i];
        }

        if(total <= k){ 
            return 0;
        }
        int low = 0, high = 0;

        for(int i = 0; i < n; i++){
            high = max(high, diff[i]);
        }

        while(low < high){
            int mid = low + (high - low) / 2;
            long long need = 0;

            for(int i = 0; i < n; i++) {
                if(diff[i] > mid) {
                    need += diff[i] - mid;
                }
            }

            if(need <= k){
                high = mid;
            } else{
                low = mid + 1;
            }
        }

        long long need = 0;

        for(int i = 0; i < n; i++){
            if(diff[i] > low) {
                need += diff[i] - low;
                diff[i] = low;
            }
        }

        k -= need;

        for(int i = 0; i < n && k > 0; i++){
            if(diff[i] == low && diff[i] > 0) {
                diff[i]--;
                k--;
            }
        }

        long long ans = 0;

        for(int i = 0; i < n; i++){
            ans += 1LL * diff[i] * diff[i];
        }

        return ans;
    }
};