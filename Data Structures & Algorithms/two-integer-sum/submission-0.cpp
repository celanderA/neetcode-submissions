class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res = {};
        unordered_map<int, int> seen = {};

        for (int i = 0; i < nums.size(); ++i) {
            int needed = target - nums[i];

            if (seen.contains(needed)) {
                res.push_back(seen[needed]);
                res.push_back(i);
                return res;
            }

            seen.insert({nums[i], i});
        }

        return res;
    }
};