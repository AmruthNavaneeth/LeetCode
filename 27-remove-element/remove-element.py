class Solution:
    def removeElement(self, nums, val):
        k = 0  
        for i in range(len(nums)):
            if nums[i] != val:
                nums[k] = nums[i]
                k += 1
        return k  

sol = Solution()
nums = [3, 2, 2, 3]
val = 3
new_length = sol.removeElement(nums, val)

print("New length:", new_length)
print("Modified array:", nums[:new_length])
