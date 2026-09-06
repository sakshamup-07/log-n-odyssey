class Solution {
public:
    void combisum(vector<int>& candidates, int target , vector<int>& ans , vector<vector<int>>& result , int index)
    {
        if(target==0)
        {
            result.push_back(ans);
        }
        for(int i = index ; i<candidates.size() ; i++)
        {
            if(i>index && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            ans.emplace_back(candidates[i]);
            combisum(candidates , target-candidates[i] , ans , result , i+1);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin() , candidates.end());
        vector<vector<int>> result;
        vector<int> ans;
        combisum(candidates , target , ans , result , 0);
        return result;
    }
};