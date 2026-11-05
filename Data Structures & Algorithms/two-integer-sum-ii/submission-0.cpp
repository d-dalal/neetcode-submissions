class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        int n=a.size();
        int i=0,j=n-1;

        while(i<j) {
            int s = a[i] + a[j];
            if (s==t) {
                return {i+1,j+1};
            } else if (s<t) {
                i++;
            } else {
                j--;
            }
        }
        return {i,j};
    }
};
