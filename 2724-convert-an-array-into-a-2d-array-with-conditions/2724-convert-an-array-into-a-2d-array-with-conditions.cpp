class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> freq(201,0);  
        vector<vector<int>> result;

        for (int num : nums) {
            int count = freq[num];

            if (count == result.size()) {
                result.push_back({});
            }

            result[count].push_back(num);
            freq[num]++;
        }

        return result;
    }
};
