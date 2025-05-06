class Solution {
public:
    long long trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        int left = 0, right = n - 1;
        int maxLeft = height[left], maxRight = height[right];
        long long waterTrapped = 0;

        while (left < right) {
            if (maxLeft < maxRight) {
                left++;
                maxLeft = max(maxLeft, height[left]);
                waterTrapped += (long long)(maxLeft - height[left]);
            } else {
                right--;
                maxRight = max(maxRight, height[right]);
                waterTrapped += (long long)(maxRight - height[right]);
            }
        }

        return waterTrapped;
    }
};
