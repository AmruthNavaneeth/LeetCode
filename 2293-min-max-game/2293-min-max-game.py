class Solution:
    def minMaxGame(self, nums):
        while len(nums) > 1:
            new_nums = []
            for i in range(len(nums) // 2):
                if i % 2 == 0:
                    new_nums.append(min(nums[2 * i], nums[2 * i + 1]))
                else:
                    new_nums.append(max(nums[2 * i], nums[2 * i + 1]))
            nums = new_nums
        return nums[0]
nums = [1, 3, 5, 2, 4, 8, 2, 2]
solution = Solution()
result = solution.minMaxGame(nums)
print(result)
