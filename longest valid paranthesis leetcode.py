class Solution:
    def longestValidParentheses(self, s: str) -> int:
        total=0
        left,right=0,0
        for i in s:
            if i=="(": left+=1
            if i==")": right+=1
            if left==right: total=max(total,left+right)
            if(right>left): left,right=0,0
        left,right=0,0
        for i in range(len(s)-1,-1,-1): 
            if s[i]=="(": left+=1
            if s[i]==")": right+=1
            if left==right: total=max(total,left+right)
            if(left>right): left,right=0,0
        return total
