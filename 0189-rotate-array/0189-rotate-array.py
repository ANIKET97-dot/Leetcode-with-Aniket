class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        n = len(nums)  #length of nums array
        k = k % n  #it means reduce k to the no. of actual rotations

        # Reverse entire array
        nums.reverse()

        # Reverse first k elements
        nums[:k] = reversed(nums[:k])

        # Reverse remaining elements
        nums[k:] = reversed(nums[k:])