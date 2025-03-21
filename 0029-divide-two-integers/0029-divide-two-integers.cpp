class Solution {
public:
    int divide(int dividend, int divisor) {
        // if (divisor == 0) {
        //     throw std::runtime_error("Division by zero is not allowed");
        // }

        
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; 
        }
        int d= floor(dividend/divisor);
        return d;
    }
    
};