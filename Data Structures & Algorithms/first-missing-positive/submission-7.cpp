class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        int min=INT_MAX, max=INT_MIN;
        int n = a.size();

        for(auto t: a) {
            if (t>max) max = t;
            if (t<min) min = t;
        }

        if (max < 1) return 1;
        if (min > 1) return 1;

        for (int i=0;i<n;i++) {
            if (a[i] < 1 || a[i] > n) {
                a[i]=0;
            }
        } 
        
        // [3,4,0,1]

        int N = n+1; // 5
        for (int i=0;i<n;i++) {
            if (a[i]!=0 && a[i]%N!=0) { // 3!=0 || 3%5!=0
                int toUpdate = (a[i]>n) ? (a[i]%N) : a[i]; // 3
                a[toUpdate-1] += N; // a[2]+=5 [3,4,5,1]
            }
            // for (int j=0;j<n;j++) {
            //     cout << a[j] << " ";
            // }
            // cout << "\n";
        }

        for (int i=0;i<n;i++) {
            if (a[i]==0 || a[i]<=n) {
                return i+1;
            }
        }
        return N;
    }
};