class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;
        while (left < right){
            int width = right - left;
            int ht = min(height[left], height[right]);
            int currWater = width * ht;
            maxWater = max(maxWater, currWater);

            height[left] < height[right] ? left++ : right--;
        }
       return maxWater;
    }
    
};