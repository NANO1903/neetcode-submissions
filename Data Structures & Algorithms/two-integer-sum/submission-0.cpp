class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<size_t, int> umap;

        for (int i = 0; i < nums.size(); ++i) 
            umap[nums[i]] = i;
       
        size_t diff = 0;
        for (int i = 0; i < nums.size(); ++i) {
            diff = static_cast<size_t>(target) - nums[i];
                        
            if (umap[diff]) return {i, umap[diff]};
        }

        return {0, 0};
    }
};
