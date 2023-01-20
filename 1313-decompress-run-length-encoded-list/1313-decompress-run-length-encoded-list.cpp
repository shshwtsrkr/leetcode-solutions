class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int freq, val;
        
        for(auto i = 0; i < nums.size(); i += 2)
        {
            freq = nums[i];
            val = nums[i + 1];
            
            for(auto j = 0; j < freq; ++j)
            {
                ans.emplace_back(val);
            }
        }
        
        return ans;
    }
};