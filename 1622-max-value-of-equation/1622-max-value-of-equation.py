from collections import deque

class Solution:
    def findMaxValueOfEquation(self, points, k):
        max_value = float('-inf')
        dq = deque() 

        for xj, yj in points:
           
            while dq and dq[0][0] < xj - k:
                dq.popleft()
            
           
            if dq:
                max_value = max(max_value, yj + xj + dq[0][1])
            
            
            while dq and dq[-1][1] <= yj - xj:
                dq.pop()
        
            dq.append((xj, yj - xj))
        
        return max_value
