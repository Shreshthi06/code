from collections import deque

class Solution:
    def findMaxValueOfEquation(self, points, k):
        max_value = float('-inf')
        dq = deque()  # Stores (xi, yi - xi)

        for xj, yj in points:
            # Remove points that are out of range (xi < xj - k)
            while dq and dq[0][0] < xj - k:
                dq.popleft()
            
            # Calculate max equation value if deque is not empty
            if dq:
                max_value = max(max_value, yj + xj + dq[0][1])
            
            # Remove elements from the back that are not useful
            while dq and dq[-1][1] <= yj - xj:
                dq.pop()
            
            # Add current point to the deque
            dq.append((xj, yj - xj))
        
        return max_value
