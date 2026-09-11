 static const int speedup = []() {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        return 0;
    }();
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;
        int n = s.size();
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        int left = 0;
        int maxi = 0;
        int maxer = 0;
        int right = 0;
        while (right < n) {
            if (mpp.find(s[right]) == mpp.end()) {
                mpp[s[right]]++;
                maxi = (right - left) + 1;
                maxer = max(maxi, maxer);
                right++;
            } else {
                mpp[s[left]]--;
                if (mpp[s[left]] == 0) {
                    mpp.erase(s[left]);
                }
                left++;
            }
        }
        return maxer;
    }
};