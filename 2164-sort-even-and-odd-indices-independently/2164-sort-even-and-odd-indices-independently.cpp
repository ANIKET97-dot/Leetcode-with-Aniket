class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        vector<int> even, odd;

        for (int i = 0; i < n; i++){
            if (i % 2 == 0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());

        int eveni = 0, oddj = 0;
        int i = 0;

        while (eveni < even.size() || oddj < odd.size()){
            if (eveni < even.size()){
                nums[i++] = even[eveni++];
            }

            if (oddj < odd.size()){
                nums[i++] = odd[oddj++];
            }
        }
        return nums;
    }
};