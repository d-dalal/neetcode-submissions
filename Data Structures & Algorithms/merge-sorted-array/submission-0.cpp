class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int i=m-1,j=n-1,t=m+n-1;
        while(i>=0 && j>=0) {
            if (a[i] <= b[j]) {
                a[t--]=b[j--];
            } else {
                a[t--]=a[i--];
            }
        }

        while(i>=0) {
            a[t--]=a[i--];
        }

        while(j>=0) {
            a[t--]=b[j--];
        }
    }
};