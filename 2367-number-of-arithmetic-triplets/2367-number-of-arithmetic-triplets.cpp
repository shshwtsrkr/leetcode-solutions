class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        
        int cnt = 0;
        
        for(auto i = 0; i < nums.size(); ++i)
            for(auto j = 0; j < nums.size(); ++j)
                for(auto k = 0; k < nums.size(); ++k)
                    if((i < j < k) && (nums[j] - nums[i] == diff) && (nums[k] - nums[j] == diff))
                       ++cnt;
                     
        
        return cnt;
    }
};