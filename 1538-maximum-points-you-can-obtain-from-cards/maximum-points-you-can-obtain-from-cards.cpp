class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int lsum =0;
        int maxi =0;
        int rightindex=n-1;
        int rsum=0;
        for(int i =0;i<k;i++)
        {
            lsum += nums[i];
            maxi = lsum;
        }
        for(int i = k-1;i>=0;i--)
        {
            lsum -=nums[i];
            rsum +=nums[rightindex];
            rightindex--;
            maxi = max(maxi , lsum+rsum);
        }
        return maxi;
    }
};