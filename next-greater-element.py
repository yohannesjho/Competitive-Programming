class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
      res = []
      stack = []
      for x in nums1:
          for i,y in enumerate(nums2):
              if x == y:
                  stack.append(y)
                  for z in range(i,len(nums2)):
                    if nums2[z]>stack[-1]:
                        stack.pop()
                        res.append(nums2[z])
                        break
                    elif z==len(nums2)-1:
                        res.append(-1)
      return res
                  