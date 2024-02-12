class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int i = 0;
        vector <bool> ans;
        int highest = INT_MIN;
        for(auto itr: candies) {
            highest = max(highest, itr);
        }
        // cout<<*max_element(candies.begin(), candies.end());
        for(auto itr: candies) {
            ans.push_back(itr + extraCandies >= highest);
        }
        return ans;
    }
};