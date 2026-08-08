class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        n = len(nums)
        k = k % n

        # Reverse entire array
        nums.reverse()

        # Reverse first k elements
        nums[:k] = reversed(nums[:k])

        # Reverse remaining elements
        nums[k:] = reversed(nums[k:])