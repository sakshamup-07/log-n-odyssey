class Solution {
public:
void rev(int left , vector<char>& s , int right)
{
    int n = s.size();
    if(left>=n/2) return;
    swap(s[left] , s[right]);
    rev(left+1 , s , right-1);
}
    void reverseString(vector<char>& s) {
        int n = s.size();
        rev(0 , s , n-1);
    }
};