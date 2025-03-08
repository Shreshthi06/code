class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size(), true);

        for (int i = 0; i < candies.size(); i++) {
            for (int j = 0; j < candies.size(); j++) {
                if (candies[i] + extraCandies < candies[j]) {
                    result[i] = false;
                    break;
                }
            }
        }
        return result;
    }
};
