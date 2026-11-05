class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(2*size);
        int i=0;

        for(auto a:nums){
            ans[i] = a;
            ans[size+i] = a;
            i++;
        }
        return ans;
    }
};