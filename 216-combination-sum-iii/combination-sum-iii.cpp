class Solution {
public:
    void combisum(int k , int n , vector<vector<int>>& result , vector<int>& ans  , int index)
    {
        if(ans.size()==k)
        {

      if(n==0)
      {
        result.emplace_back(ans);
      }
      return;
        }
      for(int i =index ; i<10;i++)
      {
        if(i>n) break;
        
        ans.push_back(i);
        combisum(k , n-i, result , ans  , i+1);
        ans.pop_back();
      }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> ans;
        combisum(k , n , result , ans  , 1);
        return result;
    }
};