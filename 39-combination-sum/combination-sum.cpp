class Solution {
public:
    void combisum(vector<int>& candidates, int target , vector<vector<int>>& result , vector<int>& ans , int index)
    {
      if(index==candidates.size())
      {
        if(target==0)
        {
        result.emplace_back(ans);
      }
              return ;
        }

    if(candidates[index]<=target)
    {
        ans.emplace_back(candidates[index]);
        combisum(candidates , target-candidates[index] , result , ans , index );
        ans.pop_back();
    }
    combisum(candidates , target , result , ans , index+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> ans;
        combisum(candidates , target , result , ans , 0);
        return result;
    }
};