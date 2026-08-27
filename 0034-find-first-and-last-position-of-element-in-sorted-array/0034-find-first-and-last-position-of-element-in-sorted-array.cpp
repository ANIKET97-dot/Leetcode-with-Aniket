// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int first = -1, last = -1;
//         int low = 0;
//         int high = nums.size() - 1;
//         while (low <= high){
//             int mid = low + (high - low) / 2;

//             if (target <= nums[mid]){
//                 high = mid - 1;
//             }
//             else {
//                 low = mid + 1;
//             }
            
//             if (nums[mid] == target){
//                 first = mid;
//             }
//         }

//         low = 0;
//         high = nums.size() - 1;

//         while (low <= high){
//             int mid = low + (high - low) / 2;

//             if (nums[mid] <= target) {
//                 low = mid + 1;
//             } else {
//                 high = mid - 1;
//             }

//             if (nums[mid] == target) {
//                 last = mid;
//                 high = mid - 1;
//             }
//         }

//         return {first, last};

//         }
    
// };

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        int low = 0, high = nums.size() - 1;

        // Find first position
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] >= target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }

            if (nums[mid] == target) {
                first = mid;
            }
        }

        low = 0;
        high = nums.size() - 1;

        // Find last position
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] <= target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }

            if (nums[mid] == target) {
                last = mid;
            }
        }

        return {first, last};
    }
};