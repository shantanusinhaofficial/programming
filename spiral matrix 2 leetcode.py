class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        result_list=[[0]*n for _ in range(n)]  # use list comprehension to create a 2D list
        r_begin, r_end, c_begin, c_end = 0, n-1, 0, n-1
        element=1
        while element <= n**2:
            # left to right
            for i in range(c_begin, c_end+1):
                result_list[r_begin][i] = element
                element += 1
            r_begin += 1
            
            # top to bottom
            for i in range(r_begin, r_end+1):
                result_list[i][c_end] = element
                element += 1
            c_end -= 1
            
            # right to left
            if r_begin <= r_end:
                for i in range(c_end, c_begin-1, -1):
                    result_list[r_end][i] = element
                    element += 1
                r_end -= 1
                
            # bottom to top
            if c_begin <= c_end:
                for i in range(r_end, r_begin-1, -1):
                    result_list[i][c_begin] = element
                    element += 1
                c_begin += 1
        
        return result_list
