class Solution {
public:
    int searchInsert(vector<int>& a, int t) {
        int n = a.size();
        int l=0,r=n-1;

        while(l<=r) {
            int m = (r+l)/2;

            if(t==a[m]) {
                return m;
            } else if (t<a[m]) {
                r=m-1;
            } else {
                l=m+1;
            }
        }
        return l;
    }
};