class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> prefixSum;
        int result=0;

        int sum = 0;
        for (auto a: nums) {
            if (a==k) {
                result++;
            }
            sum+=a;
            prefixSum.push_back(sum);
        }

        int n=nums.size();
        for(int i=1;i<n;i++) {
            if (prefixSum[i] == k) {
                result++;
            }
            for(int j=0;j<=i-2;j++) {
                if(prefixSum[i] - prefixSum[j] == k) {
                    result++;
                }
            }
        }
        return result;
    }
};