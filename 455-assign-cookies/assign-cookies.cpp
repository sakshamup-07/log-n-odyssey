class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int p1 = 0;   // child
        int s1 = 0;   // cookie
        int cnt = 0;

        while(p1 < g.size() && s1 < s.size())
        {
            if(s[s1] >= g[p1])
            {
                cnt++;
                p1++;
                s1++;
            }
            else
            {
                s1++;
            }
        }

        return cnt;
    }
};