class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left = nums;
        vector<int> right = nums;
        vector<int> ans;
        int size = nums.size();

        for (int i=1;i<size;i++) {
            left[i] *= left[i-1];
        }
        for (int i=size-2;i>=0;i--) {
            right[i] *= right[i+1];
        }
        for (int i=0;i<size;i++) {
            if (i==0) {
                ans.push_back(right[i+1]);
            } else if (i==size-1) {
                ans.push_back(left[i-1]);
            } else {
                ans.push_back(left[i-1] * right[i+1]);
            }
        }
        return ans;
    }
};
