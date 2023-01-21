class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        vector<int> target;
        
        for(auto i = 0; i < nums.size(); ++i)
            target.insert(target.begin() + index[i], nums[i]);
        
        return target;
    }
};