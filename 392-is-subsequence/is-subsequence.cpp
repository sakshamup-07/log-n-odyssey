class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length();
        int cnt =0;
        int m = t.length();
        int i =0;
        int j=0;
        while( i<n &&  j<m)
        {
            if(s[i]==t[j])
            {
                cnt++;
                i++;
                j++;
            }
            else j++;
        }
        if(cnt==n) return true;
        else return false;
    }
};