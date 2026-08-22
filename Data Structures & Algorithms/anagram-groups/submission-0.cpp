class Solution {
public:
// O(N * mlogm)
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> seen = {};
        for (int i = 0; i < strs.size(); i++){
            string current = strs[i];
            sort(current.begin(), current.end());
            seen[current].push_back(strs[i]);
        }
        vector<vector<string>> result;

        for (auto it = seen.begin(); it != seen.end(); it++) {
            result.push_back(it->second);
        }

        return result;
    }
};
