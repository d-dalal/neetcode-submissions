class Solution {
public:
    int minSubArrayLen(int t, vector<int>& a) {
        int ans=INT_MAX;

        int i=0,j=1;
        int n=a.size();
        if (a[i]>=t) return 1;

        int sum=a[i];

        while(j<n) { 
            while (j<n) { 
                sum += a[j]; 
                if (sum < t) { 
                    j++; 
                } else {
                    break; 
                }
            } // j=4, sum=14
            if (sum>= t && j-i+1 < ans) ans = j-i+1; // ans =5
            while (i<j) { // 0<4
                if (sum - a[i] >= t) { // 12 > 14
                    sum -= a[i]; 
                    i++; // 1
                    // cout << i << " ";
                    // 12
                } else {
                    break;
                }
            }
            if (sum>= t && j-i+1 < ans) ans = j-i+1;
            j++;
        }
        if (sum < t) return 0;
        return ans;
    }
};