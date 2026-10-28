class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max = arr[0];
        int s = 0;
        for (int i = 0; i < arr.size(); i++){
            if (arr[i] > max){
                max = arr[i];
                s = i;
            }

        }
        return s;
    }
};