class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int cnt;

        for(auto i = 0; i < nums.size(); ++i)
        {
            cnt = 0;
            for(auto j = 0; j < nums.size(); ++j)
            {
                if( j != i && nums[i] > nums[j])
                    ++cnt;
            }
            ans.emplace_back(cnt);
        }

        return ans;
    }
};