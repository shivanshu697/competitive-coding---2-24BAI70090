class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        n = len(nums)
        diff = float('inf')
        res_sum = 0

        for i in range(n - 2):
            left = i + 1
            right = n - 1

            while left < right:
                total = nums[i] + nums[left] + nums[right]
                d = abs(target - total)

                # Update the closest sum if a smaller difference is found
                if diff > d:
                    diff = d
                    res_sum = total

                # Exact match found
                if total == target:
                    return res_sum

                if total < target:
                    left += 1
                else:
                    right -= 1

        return res_sum

        