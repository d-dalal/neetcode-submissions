class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int e1=nums[0], e2=nums[0],c1=0,c2=0;
        int n = nums.size();

        for(auto a: nums) {
            if (a == e1) {
                c1++;
            } else if (a == e2) {
                c2++;
            } else if (c1==0) {
                e1=a;
                c1++;
            } else if (c2==0) {
                e2=a;
                c2++;
            } else {
                c1--;
                c2--;
            }
        }

        c1=0, c2=0;
        vector<int> result;
        for(auto a: nums) {
            if (a==e1) {
                c1++;
            } else if (a==e2) {
                c2++;
            }
        }
        if (c1>n/3) {
            result.push_back(e1);
        }
        if (c2>n/3) {
            result.push_back(e2);
        }
        return result;
    }
};