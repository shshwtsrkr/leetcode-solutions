class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        int j = 0;
        int x = (ruleKey=="type")?0:((ruleKey=="color")?1:2);
        
        for(int i=0;i<items.size();i++)
            if(items[i][x]==ruleValue)
                ++j;
        
        return j;
    }
};