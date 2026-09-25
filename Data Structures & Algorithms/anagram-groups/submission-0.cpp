class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;

        unordered_map<string, vector<string>> dictionary;

        for (int i = 0; i < strs.size(); ++i) {
            string orderedS = strs[i];
            std::sort(orderedS.begin(), orderedS.end());

            dictionary[orderedS].push_back(strs[i]);
        }

        for (auto& pair : dictionary) {
            res.push_back(pair.second);
        }
        return res;
    }
};
