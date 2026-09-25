#include <unordered_set>

using std::unordered_set;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uSet;

        for (auto num : nums) {
            auto inserted = uSet.insert(num);

            if (inserted.second == 0) return true;
        }
        return false;   
    }
};