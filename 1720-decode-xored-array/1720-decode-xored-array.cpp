class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        vector<int> arr;
        arr.emplace_back(first);
        for(auto i = 0; i < encoded.size(); ++i)
        {
            arr.emplace_back(first ^= encoded[i]);
        }
        
        return arr;
    }
};