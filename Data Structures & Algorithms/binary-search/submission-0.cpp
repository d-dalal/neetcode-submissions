class Solution {
public:
    int search(vector<int>& a, int t) {
        
        int n = a.size();
        int l=0, r=n-1, m;
        bool found = 0;

        while(l<=r) { // 0 < 5, 2 < 5, 2 < 3
            m = (l+r)/2; // (0+5)/2 = 2, (2+5)/2 = 3, (2+3)/2 = 2
            if (a[m]==t) {
                return m;
            } else if (t < a[m]) {
                r = m-1; // 3
            } else {
                l = m+1; // 2,
            }
        }
        return -1;
    }
};
