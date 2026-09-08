class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        vector<int> ans;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(nums1[i] == nums2[j]) {

                    bool found = false;

                    for(int k = j + 1; k < n; k++) {
                        if(nums2[k] > nums2[j]) {
                            ans.push_back(nums2[k]);
                            found = true;
                            break;
                        }
                    }

                    if(!found) {
                        ans.push_back(-1);
                    }
                }
            }
        }

        return ans;
    }
};