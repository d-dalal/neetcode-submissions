class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> a;
        int n=nums.size();

        for(int i=0;i<n;i++){
            a[target-nums[i]] = i;
        }

        if(a[nums[0]]!=0) {
            return {0,a[nums[0]]};
        }
        for(int i=1;i<n;i++){
            if(a[nums[i]]!=0 && i != a[nums[i]]) {
                return {i,a[nums[i]]};
            }
        }
    }
};
