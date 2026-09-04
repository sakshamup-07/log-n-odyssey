class Solution {
public:
    void recurse(vector<int>& nums , vector<vector<int>>& result , vector<int> ans , int i)
    {
        if(i==nums.size()) 
        {result.emplace_back(ans);
        return;
        }
        ans.emplace_back(nums[i]);
        recurse(nums , result , ans , i+1);
        ans.pop_back();
        recurse(nums , result , ans , i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> ans;
        recurse(nums , answer , ans , 0 );
        return answer;
    }
};