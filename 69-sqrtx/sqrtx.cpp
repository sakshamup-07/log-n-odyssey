class Solution {
public:
    int mySqrt(int x) {
        int result = 0;
        int low =0;
        int high =x;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(1LL * mid * mid <=x)
            {
                result = mid;
                low = mid+1;
            }
            else
            {
                high=mid-1;
            }

        }
        return result;
    }
};