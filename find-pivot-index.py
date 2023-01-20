class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        sum = 0
        for x in nums:
            sum +=x
        prefixSum = []
        prefixSum.append(0)
        for x in range(len(nums)):
            prefixSum.append(prefixSum[-1]+nums[x])
            if sum-prefixSum[x+1] == prefixSum[x]:
                return x
            
        return -1

        