class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
       temp1 = set(nums1)
       temp2 = set(nums2)
       a0 = set()
       a1 = set()
        
       for i in range(len(nums1)):
           if nums1[i] not in temp2:
             a0.add(nums1[i])
                
       for i in range(len(nums2)):
            if nums2[i] not in temp1:
               a1.add(nums2[i])
                
       return [a0, a1]
