class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> arr(n, 1);
        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                arr[i] = arr[i - 1] + 1;
            }
        }
        for (int j = n - 2; j >= 0; j--) {
            if (ratings[j] > ratings[j + 1]) {
                arr[j] = max(arr[j], arr[j + 1] + 1);
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum =sum+arr[i];
        }
        return sum;
    }
};
