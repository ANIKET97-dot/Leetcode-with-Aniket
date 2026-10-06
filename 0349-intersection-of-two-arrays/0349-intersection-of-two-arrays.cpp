class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;

        for (int i = 0; i < nums1.size(); i++){
            bool found = false;
            for (int j = 0; j < nums2.size(); j++){
                if (nums1[i] == nums2[j]){
                    found = true;
                    break;
                }
            }

        if (found){
            bool duplicate = false;
            for(int j = 0; j < res.size(); j++) {
                    if(res[j] == nums1[i]) {
                        duplicate = true;
                        break;
                    }
                }
                if(!duplicate) {
                    res.push_back(nums1[i]);
                }
        }
    }
    return res;
    }
};