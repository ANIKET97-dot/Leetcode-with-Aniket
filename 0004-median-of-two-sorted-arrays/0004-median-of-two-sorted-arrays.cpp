class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        int merged[m + n];
        int i = 0, j = 0,  k = 0;

        while (i < m && j < n){
            if (nums1[i] < nums2[j]){
                merged[k++] = nums1[i++];
            }
            else {
                merged[k++] = nums2[j++];
            }
        }
            while (i < m){
                merged[k++] = nums1[i++];
            }

            while (j < n){
                merged[k++] = nums2[j++];
            }
        

        if ((m + n) % 2 == 1){
            return merged[(m + n) / 2];
        }
        else {
            return (merged[((m + n) / 2) - 1] + merged[(m + n) / 2]) / 2.0;
        }


    }
};