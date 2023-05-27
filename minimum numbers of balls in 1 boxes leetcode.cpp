class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        dp=[0]*len(boxes)
        for i in range(len(boxes)):
            #left
            for j in range(i+1):
               if boxes[j]=="1" : dp[i]+=abs(i-j)
               #right
            for j in range(i,len(boxes)):
               if boxes[j]=="1" : dp[i]+=abs(i-j)
        return dp
