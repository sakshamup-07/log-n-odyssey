class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;

        int left = 0;
        int maxer = 0;

        for (int right = 0; right < s.size(); right++) {

            if (mpp.find(s[right]) == mpp.end()) {
                mpp[s[right]]++;
            } 
            else {
                while (mpp.find(s[right]) != mpp.end()) {
                    mpp[s[left]]--;

                    if (mpp[s[left]] == 0)
                        mpp.erase(s[left]);

                    left++;
                }

                mpp[s[right]]++;
            }

            maxer = max(maxer, right - left + 1);
        }

        return maxer;
    }
};