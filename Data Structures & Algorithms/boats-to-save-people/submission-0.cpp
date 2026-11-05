class Solution {
public:
    int numRescueBoats(vector<int>& a, int limit) {
        sort(a.begin(), a.end());

        int n = a.size();
        int i=0,j=n-1, ans=0;

        while(i<j) {
            if (a[i] + a[j] <= limit) {
                i++;
                j--;
                ans++;
            } else {
                j--;
                ans++;
            }
        }
        if (i==j) ans++;
        return ans;
    }
};