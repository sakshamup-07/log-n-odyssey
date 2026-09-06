class Solution {
public:
    void combisum(vector<int>& nums , vector<int>& ans , vector<vector<int>>& result , int index)
    {
       
            result.emplace_back(ans);
        
        for(int i=index;i<nums.size();i++)
        {
            if(i>index && nums[i]==nums[i-1]) continue;
      ans.push_back(nums[i]);
      combisum(nums , ans , result , i+1);
      ans.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<int> answer;
        vector<vector<int>> result;
        combisum(nums , answer , result , 0);
        return result;

    }
};