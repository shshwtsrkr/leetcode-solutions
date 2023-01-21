class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        string shuffled = s;
        
        for(auto i = 0; i < indices.size(); ++i)
        {
            shuffled[indices[i]] = s[i];
        }
        
        return shuffled;
    }
};